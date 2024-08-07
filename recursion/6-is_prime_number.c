#include "main.h"

/**
 * is_prime - Check if a number is prime
 * @n: The number to check
 * @c: The divisor to check against
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - Check if a number is a prime number
 * @n: The number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
