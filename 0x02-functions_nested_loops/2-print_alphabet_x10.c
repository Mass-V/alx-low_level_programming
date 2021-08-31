#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lower case
 *
 * Remote: Always 0.
 */
void print_alphabet_x10(void);
int main(void)
{
	int n, count;

	count = 0;
	while (count <= 9)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		count++;

		_putchar('\n');
	}
	return (0);
}
