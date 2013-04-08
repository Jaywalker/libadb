#include <stdio.h>
#include "sysdeps.h"
#include "adb.h"

#define  TRACE_TAG   TRACE_ADB


int main(int argc, char **argv) {
#if ADB_HOST
	adb_sysdeps_init();
	adb_trace_init();
	D("Handling commandline()\n");
	return adb_commandline(argc - 1, argv + 1);
#else
	/* If adbd runs inside the emulator this will enable adb tracing via
	 * adb-debug qemud service in the emulator. */
	adb_qemu_trace_init();
	if((argc > 1) && (!strcmp(argv[1],"recovery"))) {
		adb_device_banner = "recovery";
		recovery_mode = 1;
	}

	start_device_log();
	D("Handling main()\n");
	return adb_main(0, DEFAULT_ADB_PORT);
#endif
}
