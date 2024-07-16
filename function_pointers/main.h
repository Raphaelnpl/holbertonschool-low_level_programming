#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* pour size_t */

/* void array_iterator(int *array, size_t size, void (*action)(int)); */

#endif /* MAIN_H */

void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
