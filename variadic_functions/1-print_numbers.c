#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that print number, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		if (a > 0)
		{
			printf("%s%d", separator, va_arg(list, int));
		}
		else
		{
			printf("%d", va_arg(list, int));
		}
	}

	va_end(list);
	printf("\n");
}
