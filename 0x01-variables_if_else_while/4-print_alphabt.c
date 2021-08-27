#include <stdio.h>

/**
 * main - prints the alphabet in lowercase excluding 'e' & 'q'
 *
 * Return: always zer0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}

		putchar('\n');

		return (0);
}
