#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
