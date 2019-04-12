# BMC Certificate management

Certificate management allows to replace the existing certificate and private
key file with another (possibly certification Authority (CA) signed)
certificate and private key file. Certificate management allows the user to
install both the server and client certificates. The REST interface allows to
update the certificate, using an unencrypted certificate and private key file
in .pem format, which includes both private key and signed certificate.

### Signed Certificate upload Design flow:

- The REST Server copies the certificate and private key file to a temporary
  location.
- REST server should map the URI to the target DBus application (Certs) object.
  The recommendation for the D-Bus application implementing certificate D-Bus
  objects is to use the same path structure as the REST endpoint.
     e.g.:
         - The URI /xyz/openbmc_project/certs/Server/Https maps to instance
           of the certificate application handling Https server certificate.
         - The URI /xyz/openbmc_project/certs/Client/LDAP maps to instance
           of the certificate application handling LDAP client certificate.
- REST server should call the install method of the certificate application
  instance.
- Certificate manager application also implements d-bus object
  xyz.openbmc_project.Certs.Manager. This includes the collection of
  "certificates specific d-bus objects" installed in the system. This d-bus
  provide option to view the certificate on PEM format and delete the same.
  Refer https://en.wikipedia.org/wiki/Privacy-Enhanced_Mail for details.
     e.g. for Certificate specific d-bus path
        -  /xyz/openbmc_project/certs/Server/<unique-id> maps to
           instance of the server types certificate.
        -  /xyz/openbmc_project/certs/Client/<unique-id> maps to
           instance of the client type certificate.
     note: unique id is the hash value of certificate issuer and serial number.

- Applications should subscribe the xyz.openbmc_project.Certs.Manager
  to see any new certificate is uploaded or change in the existing
  certificates.
- Certificate manager scope is limited to manage the certificate and impacted
  application is responsible for application specific changes.
- Incase of delete action, certificate manager creates a new self signed
  certificate after successful delete.

### REST interface details:

   ```
   url: /xyz/openbmc_project/certs/Server/Https
   Description: Update https server signed certificate and the private key.
   Method: PUT

   url: /xyz/openbmc_project/certs/Server/Https
   Description: Delete https server signed certificate and the private key.
   Method: DELETE

   url: /xyz/openbmc_project/certs/Client/LDAP
   Description: Update ldap client certificate and the private key.
   Method: PUT

   url: /xyz/openbmc_project/certs/Client/LDAP
   Description: Delete ldap client certificate and the private key.
   Method: DELETE

   Return codes

       200  Success
       400  Invalid certificate and private key file.
       405  Method not supported.
       500  Internal server error

   ```
#### d-bus interface to install certificate and private Key
- Certs application must:
  - validate the certificate and Private key file by checking, if the Private
    key matches the public key in the certificate file.
  - copy the certificate and Public Key file to the service specific path
    based on a configuration file.
  - Reload the listed service(s) for which the certificate is updated.

#### d-bus interface to Delete certificate and Private Key

- certificate manager should provide interface to delete the existing
  certificate.
- Incase of server type certificate deleting a signed certificate will
  create a new self signed certificate and will install the same.

### Boot process
-  certificate management instances should be created based on the system
   configuration.

-  Incase of no Https certificate or invalid Https certificate, certificate
   manager should update the https certificate with self signed certificate.

### Repository:
  phosphor-certificate-manager
### Redfish Certificate Support
#### Certificate Upload
- Redfish initiates certificate upload by issuing a POST request on the Redfish
  CertificateCollection with the certificate file.
  Fo example: For HTTPS certificate upload POST request is issued on URI
  "/redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates"
- Bmcweb receives the POST request and it maps the Redfish URI to the
  corresponding Certificate Manager D-Bus URI.
  e.g: HTTPS certificate collection URI
  /redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates is mapped to
  /xyz/openbmc_project/certs/server/https.
- Bmcweb invokes an asynchronous  method call by passing reference to a callback
  method.
- Asynchronous method invokes the Install method of the Certificate Manager
  by passing the certificate file.
- Certificate Manager validates, installs the certificate file and creates a
  Certificate object.
- Certificate manager reloads the services specified, so that the services  can
  read the installed certificate and reload the SSL context.
- Bmcweb's asynchronous method invokes the Callback method with the status of
  the "Install" D-Bus method received from Certificate Manager.
- Callback method checks the response received, if failure sets the response
  message error details, if success sets the response message with newly created
  certificate details
- Certificate Manager implements "xyz.openbmc_project.Certs.Install" interface
  to cater for installing certificates in the system.
- Certificate object D-Bus  path is mapped to corresponding Redfish
  certificate URI.
  e.g: /xyz/openbmc_project/certs/server/https/1 is mapped to
  /redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates/1
  ID of the certificate is appended to the collection URI.
#### Certificate Replace
- Certificate Object implements "xyz.openbmc_project.Certs.Replace" interface to
  for replacing existing certificate.
- Redfish issues Replace certificate request by invoking the ReplaceCertificate
  action of the CertificateService.
- Redfish Certificate Collection URI is mapped to corresponding Certificate
  D-Bus object URI
  e.g: HTTPS certificate object 1 URI
  /redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates/1 is mapped to
  /xyz/openbmc_project/certs/server/https/1.
- Bmcweb receives POST request for Replace Certificate, invokes the Replace
  D-Bus method of the Certificate object asynchronously.
- Callback method will be passed to the bmcweb asynchronous method which will
  called after completion of the D-Bus Replace method.
- Callback method checks the response received, if failure response message is
  set with error details, if success response message is set with  the replaced
  certificate details.

#### Bootup
- During bootup certificate objects created for the existing certificates.
### Errors thrown by Certificate Manager
- NotAllowed exception thrown if Install method invoked with a certificate
  already existing. At present only one certificate per certificate type is
  allowed.
- InvalidCertificate excption thrown for validation errors.

#### Certificate Deletion
- Certificate deletion is not allowed as per Redfish specification.

