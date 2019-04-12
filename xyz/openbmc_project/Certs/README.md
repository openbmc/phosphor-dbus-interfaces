# BMC Certificate management

Certificate management allows to replace the existing certificate and private
key file with another (possibly certification Authority (CA) signed)
certificate and private key file. Certificate management allows the user to
install both the server and client certificates. The REST interface allows to
update the certificate, using an unencrypted certificate and private key file
in .pem format, which includes both private key and signed certificate.

### Signed Certificate upload Design flow(Pre-generated):

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

## CSR

### User flow for generating and installing Certificates(CSR Based):
   Certificate Signing Request [CSR](https://en.wikipedia.org/wiki/Certificate_signing_request)
is a message sent from an applicant to a certitificate authority in order to
apply for a digital identity certificate. This section provides the details of
the CSR based certificate user flow.
- The user performs the CSR/create interface
      BMC creates new private key and CSR object which includes CSR information.
- The user performs the CSR/export interface
      Allows the user to export the CSR file which is part of newly created
      CSR object. This can be provided to the CA to create SSL certificate.
- The user perform the certificate upload on appropriate services.
      Example: if trying to replace the HTTPS certificate for a Manager,
      navigate to the Manager’s Certificate object upload interface.
      The Upload method internally  pairs the private key used in the first
      step with the installed certificate.

### Assumptions:
- BMC updates the private key associated to CSR for any new CSR request.
- BMC upload process automatically appends certificate file with system CSR
  private key, for the service which requirs certificate and key.
- CSR based Certificate validation is alway's based on private key in the system.

### Asynchronous CSR Request
- CSR requests are time-consuming and when initiated through D-Bus might result
  in D-Bus time-out error.
- Process forked and time-consuming CSR operation performed in the child
  process.
- OpenSsl command used in child process for generating CSR.
- Event with the PID of the fork is registered in the sd_event_lopp, for  the
  parent to notified about the CSR completion.
- Input parameters validated before forking the process.
- Child process after successful completion of the CSR request creates a CSR
  object.
- Caller waits on the "InterfacesAdded" signal generated by the CSR object.
- Caller invokes the cSR method of the CSR interface to read the CSR data when
  notified with "InterfacesAdded" signal.
- Caller uses a timer to time-out and return error if the "InterfacesAdded"
  signal is not received for a specified time.
- Certificate Manager implements "/xyz/openbmc_project/Certs/CSR/Create"
  interface.
- CSR object created implements "/xyz/openbmc_project/Certs/CSR" interface.

### Example usage for the GenerateCSR POST request

   ```
   url: /redfish/v1/CertificateService
   Action: #CertificateService.GenerateCSR {
    "City": "HYB",
    "CertificateCollection": "/redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates/",
    "CommonName": "www.company.com",
    "ContactPerson":"myname",
    "AlternativeNames":["mycompany.com","mycompany2.com"],
    "ChallengePassword":"abc123",
    "Email":"xxx@xx.com",
    "GivenName":"localhost",
    "Initials":"G",
    "Country": "IN",
    "KeyCurveId":"0",
    "KeyUsage":["ServerAuthentication","ServerAuthentication"],
    "KeyBitLength": 2048,
    "KeyPairAlgorithm": "RSA",
    "Organization": "ABCD",
    "OrganizationUnit": "XY",
    "State": "TX",
    "SurName": "XX",
    "UnstructuredName": "xxx"
   }
   Description: This is used to perform a certificate signing request.
   Method: POST

  ```

### Additional interfaces:
- CertificateService.ReplaceCertificate
      Allows the user to replace an existing certificate.

### d-bus interfaces:

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
  CertificateCollection.
  Fo example: For HTTPS certificate upload POST request is issued on URI
  "/redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates"
- Redfish Certificate Collection URI is mapped to corresponding Certificate
  Manager D-Bus object
  path.
  e.g: HTTPS certificate collection URI
  /redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates is mapped to
  /xyz/openbmc_project/certs/server/https.
- Certificate Manager implements "xyz.openbmc_project.Certs.Install" interface
  to cater for installing certificates in the system.
- Certificate Manager validates the certificate, creates installs the
  certificate,  reloads the specified services and creates a Certificate object.
- Certificate object D-Bus  path is mapped to corresponding Redfish
  certificate URI. 1 in the below example indicates certificate ID.
  e.g: /xyz/openbmc_project/certs/server/https/1 is mapped to
  /redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates/1
  ID of the certificate is appended to the collection URI.
- After successful installation of the certificate bmwcweb response message is
  updated with the data of the newly created resource.
#### Certificate Replace
- Certificate Object implements "xyz.openbmc_project.Certs.Replace" interface to
  for replacing existing certificate.
- Redfish issues Replace certificate request by invoking the ReplaceCertificate
  action of the CertificateService.
- Redfish Certificate Collection URI is mapped to corresponding Certificate
  D-Bus object
  e.g: HTTPS certificate object 1 URI
  /redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates/1 is mapped to
  /xyz/openbmc_project/certs/server/https/1.
- After successfull replace of the certificate bmcweb response message is
  updated with the data of the modified certificate resource.

#### Bootup
- During bootup certificate objects created for the existing certificates.
### Errors thrown by Certificate Manager
- NotAllowed exception thrown if Install method invoked with a certificate
  already existing. At present only one certificate per certificate type is
  allowed.
- InvalidCertificate excption thrown for validation errors.

#### Certificate Deletion
- Certificate deletion is not allowed as per Redfish specification.

