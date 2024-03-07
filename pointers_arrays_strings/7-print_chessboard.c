#include "main.h"

/**
 * print_chessboard - check the code
 *
 * @a : ar
 */
void print_chessboard(char (*a)[8])
{
	int z, p;
	for (z = 0; z < 8; z++)
	{
		for (p = 0; p < 0; p++)
		{
			_putchar (a[z][p]);
		}
		_putchar('\n');
	}
}
