# BMC Certificate management

Ceritificate management allows to replace the existing certificate key file
with another (possibly CA signed) Certificate key file. Certificate management
allows the user to install both the server and client certificates.  The REST
interface allows to update certificate using an unencrypted certificate key
file in .pem format, which includes both private key and signed certificate.

### Signed certificate upload Design flow:

- The REST Server copies the certificate to a temporary location.
- If there is an existing certificate in the temporary location, should reject
  this request with a 409 response.
- REST server should map the URI to the target DBus application (Certs) object.
  The recommendation for the D-Bus application implementing certificate D-Bus 
  objects is to use the same path structure as the REST endpoint.
     e.g.:
         - The URI /xyz/openbmc_project/certs/server/https maps to instance
           of the Certs application handling https server certificate.
         - The URI /xyz/openbmc_project/certs/client/ldap maps to instance
           of the Certs application handling LDAP client certificate.
- REST server should call the install method on the Certs application
  instance.

### REST interface details:

   ```
   url: /xyz/openbmc_project/certs/server/https
   Description: Update https server signed Certificate & Key.
   Method: PUT

   url: /xyz/openbmc_project/certs/server/https
   Description: Delete https server signed Certificate & Key.
   Method: DELETE

   url: /xyz/openbmc_project/certs/client/ldap
   Description: Update ldap client Certificate & Key.
   Method: PUT

   url: /xyz/openbmc_project/certs/client/ldap
   Description: Delete ldap client Certificate & Key.
   Method: DELETE

   Return codes

       200  Success
       400  Invalid Certificate key file.
       405  Method not supported.
       409  Certificate update in progres
       500  Internal server error
 
   ```


### d-bus interfaces:

#### d-bus interface to activate Certificate Key
- Certs application must :
  - validate the certificate key file by checking the private key matches the
    public key in the certificate file. 
  - copy the certificate Key file to the service specific path based on
    a configuration file.
  - Reload the listed service(s) for which the certificate is updated.

#### d-bus interface to Delete Certificate Key

- Certificate manager should provide interface to delete the existing
  certificate.
- Incase of server type certificate Deleting a signed certificate will
  create a new self signed certificate and will activate the same.

### Boot process
-  Certificate management instances should be created based on the system
   configuration.

-  Incase of no https certificate or invalid https certificate, certificate
   manager should update the https certificate with self signed certificate.

### Repository:
  phosphor-certificate-manager
