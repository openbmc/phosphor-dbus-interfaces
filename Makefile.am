DBUS_INTERFACES = \
	xyz/openbmc_project/Association.interface.yaml \
	xyz/openbmc_project/Inventory/Decorator/Asset.interface.yaml \
	xyz/openbmc_project/Inventory/Decorator/Cacheable.interface.yaml \
	xyz/openbmc_project/Inventory/Decorator/Replaceable.interface.yaml \
	xyz/openbmc_project/Inventory/Decorator/Revision.interface.yaml \
	xyz/openbmc_project/Inventory/Decorator/VendorInformation.interface.yaml \
	xyz/openbmc_project/Inventory/Decorator/VoltageControl.interface.yaml \
	xyz/openbmc_project/Inventory/Item.interface.yaml \
	xyz/openbmc_project/Inventory/Item/Bmc.interface.yaml \
	xyz/openbmc_project/Inventory/Item/Board.interface.yaml \
	xyz/openbmc_project/Inventory/Item/Board/IOBoard.interface.yaml \
	xyz/openbmc_project/Inventory/Item/Board/Motherboard.interface.yaml \
	xyz/openbmc_project/Inventory/Item/Cpu.interface.yaml \
	xyz/openbmc_project/Inventory/Item/CpuCore.interface.yaml \
	xyz/openbmc_project/Inventory/Item/Dimm.interface.yaml \
	xyz/openbmc_project/Inventory/Item/Fan.interface.yaml \
	xyz/openbmc_project/Inventory/Item/MemoryBuffer.interface.yaml \
	xyz/openbmc_project/Inventory/Item/NetworkInterface.interface.yaml \
	xyz/openbmc_project/Inventory/Item/PowerSupply.interface.yaml \
	xyz/openbmc_project/Inventory/Manager.interface.yaml \
	xyz/openbmc_project/Led/Group.interface.yaml \
	xyz/openbmc_project/Led/Physical.interface.yaml \
	xyz/openbmc_project/Logging/Entry.interface.yaml \
	xyz/openbmc_project/ObjectMapper.interface.yaml \
	xyz/openbmc_project/Object/Delete.interface.yaml \
	xyz/openbmc_project/Sensor/Threshold/Critical.interface.yaml \
	xyz/openbmc_project/Sensor/Threshold/Warning.interface.yaml \
	xyz/openbmc_project/Sensor/Value.interface.yaml \
	xyz/openbmc_project/Time/EpochTime.interface.yaml


DBUS_ERRORS =

INTERFACE_SERVER_SOURCE = $(DBUS_INTERFACES:.interface.yaml=/server.cpp)
INTERFACE_SERVER_HEADERS = $(DBUS_INTERFACES:.interface.yaml=/server.hpp)

.PHONY: all
all: $(INTERFACE_SERVER_SOURCE) $(INTERFACE_SERVER_HEADERS)

.PHONY: clean
clean:
	for i in $(INTERFACE_SERVER_SOURCE) $(INTERFACE_SERVER_HEADERS); do \
	    [ -e $$i ] && rm $$i ;\
	    [ -e `dirname $$i` ] && \
		rmdir -p --ignore-fail-on-non-empty `dirname $$i`; \
	    true ; \
	done

%/server.cpp: %.interface.yaml
	@mkdir `dirname $@` -p
	sdbus++ -r . interface server-cpp `echo $^ | \
		sed s/\\.interface.yaml// | sed "s/\//./g"` > $@

%/server.hpp: %.interface.yaml
	@mkdir `dirname $@` -p
	sdbus++ -r . interface server-header `echo $^ | \
		sed s/\\.interface.yaml// | sed "s/\//./g"` > $@
