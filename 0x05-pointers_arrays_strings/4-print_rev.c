#include "main.h"

/**
 * print_rev - tion that prints a string, in reverse, followed by a new line
 * @s: pointer s
 */
void print_rev(char *s)
{
	int counter = 0;
	int n, m;

	for (n = 0; s[n] != '\0'; n++)
	{
		counter++;
	}
	for (m = (counter - 1); m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
