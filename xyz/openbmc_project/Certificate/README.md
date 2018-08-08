# BMC Certificate management

BMC has a self signed SSL certificate by default. Certificate management
provides a mechanism to replace the self signed certificate with CA signed
certificate based on BMC generated CSR and uploading certificate to BMC
using Key pair. The scope of this document is to provide a mechanism to
upload the certificate file and private key and activate the new certificate.  

## Signed certificate update.

BMC need to provide a REST interface to update the .pem file, which includes
private key and signed certificate. User can create .pem file by including 
custom private key and signed certificate with public key from a CA.

### REST Interface details: 

   ```
   curl -c cjar -b cjar -k -H "Content-Type: application/octet-stream" \
   -X PUT -T <filename.pem> https://${bmcIP}/xyz/openbmc_project/certificates/<type>
   ```

Here “type”  can be SSL/LDAP or any service type for future enhancement.

### Design flow:

- REST Server will copy the certificate to /tmp/cert/<type>/ <filename.pem>.
- If there is an existing certificate in the temporary location, should reject
  the new request saying certificate update is in progress.
- REST should call d-bus method provided by certificate manager to update the
  certificate.
- Minimal validation should support by certificate manager.
- On Successful validation move the file to permanent location and return
  success to the rest server and incase of failure return the appropriate
  return code.
- certificate manger should the Restart the listed services associated the type.

### d-bus interfaces:

#### Deleting certificate

- Certificate manager should provide interface to delete the existing
  certificate.
- Deleting a signed certificate will create a new self signed certificate and
  will continue the activation process.

#### View/download certificate

  Certificate manager should provide interface to download the existing
  certificate. This will be useful webUI.

### Boot process

   Incase of no certificate or invalid certificate, certificate manager should
   update the certificate with self signed certificate.

### Assumptions: 
- d-bus object available for all types of certificate at boot time.
- Certificate manager daemon  is needed .
- Code will be stored in phosphor-cert-manager repository.
