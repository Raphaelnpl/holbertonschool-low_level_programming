#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - Include necessary header for variadic functions
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(list, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (a < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(list);
	printf("\n");
}
