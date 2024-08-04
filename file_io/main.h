#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* Function prototypes */
void error_exit(int code, const char *message, const char *file);

#endif /* MAIN_H */
