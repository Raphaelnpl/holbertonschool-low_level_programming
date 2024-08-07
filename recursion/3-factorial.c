#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculate the factorial for
 *
 * Return: the factorial of n if n is non-negative,
 *         or -1 if n is negative to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
