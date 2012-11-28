#ifndef _LIBADB_H_
#define _LIBADB_H_

int libadb_push_file(const char *lpath, const char *rpath, int verify);
int libadb_pull_file(const char *rpath, const char *lpath);

#endif

