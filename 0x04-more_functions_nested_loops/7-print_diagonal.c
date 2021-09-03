#include "main.h"

/**
 * void print_diagonal - draws a diagonal line on terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int x, spc;

	if ((n > 0) && (n != 0))
	{
		for (x = 0; x < n; x++)
		{
			for (spc = 0; spc < x; spc++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
