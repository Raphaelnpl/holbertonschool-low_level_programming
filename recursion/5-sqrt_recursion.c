#include "main.h"

/**
 * square - a
 * Description: a
 * @x: a
 * @guess: a
 * Return: a
 */
int square(int x, int guess)
{
	if ((guess * guess) == x)
	{
		return (guess);
	}
	if ((guess * guess) > x)
	{
		return (-1);
	}
	else
	{
		return (square(x, guess + 1));
	}
}

/**
 * _sqrt_recursion - a
 * @n: a
 * Return: e
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
