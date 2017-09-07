# Factory Reset

## Overview

The OpenBMC API defines a factory reset interface, which is intended to be used
to restore the BMC to its original manufacturer settings. This interface is
defined generically; it is specifically and variously implemented throughout
OpenBMC services, which allows these services to be individually restored to
factory defaults as needed.

## Known Implementations

### org.open_power.Software.Host.Updater

The host software updater factory reset removes any read-write volumes,
persistence files, and preserved volume created during the host software update 
process.

### xyz.openbmc_project.Network

The network factory reset overwrites the configuration for all configured
network interfaces to a DHCP setting.

### xyz.openbmc_project.Software.BMC.Updater

The BMC software updater factory reset, like the host software updater reset,
removes any volumes and persistence files created during the BMC software
update process. This reset occurs only on the next BMC reboot.
