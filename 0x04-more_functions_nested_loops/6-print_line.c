#include "main.h"

/**
 * void print_line - draws a straight line on terminal
 *@n: input digit that determines the length of the line
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
