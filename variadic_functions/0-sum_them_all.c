#include <stdio.h>
#include "stdarg.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters
 *
 * Return: Sum of all parameters, 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	int sum;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	for (a = 0; a < n; a++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
