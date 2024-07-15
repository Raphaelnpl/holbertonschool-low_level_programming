#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /* pour size_t */

void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
