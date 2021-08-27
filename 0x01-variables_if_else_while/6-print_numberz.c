#include <stdio.h>

/**
 * main - prints single numerals from 0
 * Return: still zer0
 */
int main(void)
{
	int nm;

	for (nm = 0; nm <= 9; nm++)
	{
		putchar((nm % 10) + '0');
	}

	putchar('\n');

	return (0);
}
