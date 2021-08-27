#include <stdio.h>

/**
 * main - prints alpha numerals 0..9a..f in hexadecimals
 *
 * Remote: zero
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
