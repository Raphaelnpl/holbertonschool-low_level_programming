#include "main.h"
#include "function_pointers.h"
/**
 * print_hello - Prints "Hello, Betty!" to the standard output
 * @name :
 * @f :
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
	{
		f((name));
	}
	else
	{
		return;
	}
}
