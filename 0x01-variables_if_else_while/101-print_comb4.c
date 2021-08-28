#include <stdio.h>

/**
 * main - prints different combinations of three digits
 * separated by comma and space
 *
 * Return: always zero
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != '7' || (i == '7' && k != '9')
					    || (i == '7' && j != '8'))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
