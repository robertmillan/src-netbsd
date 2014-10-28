#include <sys/cdefs.h>

#include <sys/param.h>
#include <sys/conf.h>
#include <sys/device.h>
#include <sys/bus.h>

#include "rump_private.h"

#include "ioconf.c"

RUMP_COMPONENT(RUMP_COMPONENT_DEV)
{

	config_init_component(cfdriver_ioconf_pci_auich,
	    cfattach_ioconf_pci_auich, cfdata_ioconf_pci_auich);
}
