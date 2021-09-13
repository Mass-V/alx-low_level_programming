#include "main.h"

/**
 * print_chessboard - prints a multidimensional array that prints a chessboard
 * @a: array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int x, i;

	for (x = 0; x < 8; x++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[x][i]);
		_putchar('\n');
	}
}
