#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /* pour size_t */

int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
