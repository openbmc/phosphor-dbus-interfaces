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

### D-Bus time-out error during CSR generation
- CSR requests are time-consuming and when initiated through D-Bus might result
  in D-Bus time-out error.
- To fix D-Bus time-out error a process is forked and CSR operation is performed
  in the child process.
- In the child process OpenSSL command will be used for generating CSR
- A event with the PID of the fork will be registered in the sd_event_lopp, for
  the parent to be notified about the CSR completion.
- Input parameters are validated before forking the process.
- Child process after sucessfull completion of the CSR request creates a CSR
  object.
- Caller waits on the "InterfacesAdded" signal generated by the CSR
  object.
- Caller invokes the cSR method of the CSR interace to read the CSR data when
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

### Redfish support for Certificate Upload
#### Certificate Upload
- User initiates certificate upload by issuing a POST request on the
  certificate collection with the certificate file as   input
- BMCWeb based upon the URI of the POST request invokes the Install method of
  the corresponding certificate manager instance.     
  - Example: If URI points to HTTPS certificate then install method of bmcweb
    certificate manager instance is invoked.
- Certificate file is validated and for any validation failures
  InvalidCertificate error is returned to the caller.
- After sucessfull validation a Certificate object is created with the
  certificate details and caller is returned with the certificate details
- Only one certificate per certificate type is allowed, NotAllowed error is
  thrown if a certificate is already existing.
- Certificate Manager class implements "xyz.openbmc_project.Certs.Install" 
  D-Bus interface
- Command to POST a certifiate on CertificateCollection: 
  curl -c cjar -b cjar -k -H "X-Auth-Token: $bmc_token" -H \
  "Content-Type: application/octet-stream" -X POST -T testcert.pem \
  https://${bmc}/redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates
- Command to list certificates installed for a specific certificate collection
  curl -k -H "X-Auth-Token: $bmc_token" -X GET \
  https://${bmc}/redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates/
- Command to list the certificate details
  curl -k -H "X-Auth-Token: $bmc_token" -X GET \
  https://${bmc}/redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates/1

#### Bootup
- During bootup if a certificate is already existing in the system it is
  validated and an instance of Certificate is created with the certificate
  details.

#### Replacing existing certificate
- Certificate class implments "xyz.openbmc_project.Certs.Replace" D-Bus
  interface to cater for replacing an existing certificate.
- User can initiate certificate replace by invoking the ReplaceCertificate
  Action of the CertificateService
- Example for replacing an existing HTTPS certificate
  curl -c cjar -b cjar -k -H "X-Auth-Token: $bmc_token" -X POST \
  https://${bmc}/redfish/v1/CertificateService/Actions/CertificateService.ReplaceCertificate/ \
  -d '{"CertificateType":"PEM", "CertificateString":"zzzzz", \
  "CertificateUri":"/redfish/v1/Managers/bmc/NetworkProtocol/HTTPS/Certificates/1"}'

#### Certificate Deletion
- Certificate deletion is not allowed as per Redfish specification. 
- User can use ReplaceCertificate Action of the CertificateService to replace
  an expired certificate.

