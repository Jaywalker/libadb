#include "file_sync_service.h"
#include <libadb/libadb.h>

int libadb_push_file(const char *lpath, const char *rpath, int verify) {
	return do_sync_push(lpath, rpath, verify);
}

int libadb_pull_file(const char *rpath, const char *lpath) {
	return do_sync_pull(rpath, lpath);
}


