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
- Certificate manager application creates a new d-bus object, which includes the
  view/delete of certificate.. View includes the standard information in X.509
  certificate. Refer https://en.wikipedia.org/wiki/X.509 for details.
- Impacted application should subscribe the associated d-bus upload interface,
  and responsible for any application specific action.
- Incase of "server" type certificates delete action, certificate manager
  creates a new self signed certificate after successfull delete.

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

### CA Certificate management
 update-ca-certificates is a program that updates the directory /etc/ssl/certs
 to hold SSL certificates and generates certificates.crt, a concatenated
 single-file list of certificates. Refer man page for details.
 https://www.unix.com/man-page/suse/8/update-ca-certificates/

- Existing certificate management interfaces can be used for uploading the CA
  certificates in the local trust store.
- Certificate manager application internally uses the update-ca-certificates
  back-end to install the CA certificates.
- CA d-bus interface provides delete/blacklist/view CA certificates.
- Well-known CA certificates included as part of the packaging process.

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
