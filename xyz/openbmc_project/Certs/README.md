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

#### Additional interfaces:
- CSR/delete interface
      Allows the user the delete the CSR and and its associated private key
      in the system.

### Assumptions:
- BMC  updates the private key associated to CSR for any new CSR request.
  Any CSR based certificate upload will fail for the old CSR based certificates.
- BMC upload process automatically appends certificate file with system CSR
  private key, for the service which requirs certificate and key.

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
