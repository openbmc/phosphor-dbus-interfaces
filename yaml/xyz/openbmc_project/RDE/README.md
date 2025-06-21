# xyz.openbmc_project.RDE.Manager

## Summary

Provides an interface for performing Redfish Device Enablement (RDE) operations
on a target device. This includes dispatching Redfish HTTP verbs (GET, POST,
PATCH, etc.), retrieving schema metadata, and querying RDE support capabilities.
Payloads may be delivered inline or via file paths to optimize performance and
resource usage.

## Interfaces

### `xyz.openbmc_project.RDE.Manager`

#### Methods

- `PerformRedfishOperation`

  - Description: Perform a Redfish operation (GET, POST, etc.) on a target
    device using either inline or file-based payloads.
  - Parameters:
    - `RequestId`: Unique numeric request identifier.
    - `OperationId`: Redfish HTTP verb to execute.
    - `TargetURI`: URI string for the Redfish resource.
    - `DeviceId`: Unique identifier for the target device.
    - `Payload`: Inline data string or file path/URI to data.
    - `PayloadFormat` (optional): `Inline` or `FilePath` (default: `Inline`).
    - `EncodingType` (optional): e.g., `"BEJ"` or `"JSON"` (default: `"BEJ"`).
    - `SessionId` (optional): Transaction/session identifier.
  - Returns:
    - `Response`: Output returned from the Redfish device.
    - `StatusCode`: HTTP-style status code (e.g., 200, 404).

- `GetDeviceSchemaInfo`

  - Description: Retrieve the schema or URI dictionary information for the
    target device.
  - Parameters:
    - `DeviceId`: Unique identifier for the device.
    - `OutputFormat` (optional): `JsonData` or `FilePath` (default: `FilePath`)
  - Returns:
    - `SchemaInfo`: Inline JSON or file path/URI containing schema info.

- `GetSupportedOperations`
  - Description: Returns the list of supported Redfish operations and encoding
    types for a given device.
  - Parameters:
    - `DeviceId`: Unique identifier for the device.
  - Returns:
    - `SupportedOps`: JSON-formatted array of supported HTTP verbs and formats.

#### Enumerations

- `OperationType`: One of `GET`, `POST`, `PUT`, `PATCH`, `DELETE`.
- `PayloadFormatType`: `Inline` or `FilePath`.
- `SchemaOutputFormat`: `JsonData` or `FilePath`.
