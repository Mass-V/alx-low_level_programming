#include <stdio.h>

/**
 * main - prints all possible different combination of two digits
 *separeted by space and a comma.
 *
 * Return: always zero
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
