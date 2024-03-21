#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* pour size_t */

/* void array_iterator(int *array, size_t size, void (*action)(int)); */

#endif /* MAIN_H */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int int_index(int *array, int size, int (*cmp)(int));
void print_name_as_is(char *name);
int _putchar(char c);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));
