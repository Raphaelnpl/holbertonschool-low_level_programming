#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, digit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10
	
	if (digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, digit);
	}
	if (digit == 0)
	{
	printf("Last digit of %d is %d and is 0", n, digit);
	}
	if (digit < 6)
	{
	printf("last digit of %d and is less than 6 and not not 0 %d", n, digit)
	}
	return (0);
}
