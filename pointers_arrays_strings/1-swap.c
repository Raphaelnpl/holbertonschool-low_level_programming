#include "main.h"
#include <stdio.h>

/**
 * swap_int - functions
 *@a: parameter
 *@b: parameter
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
