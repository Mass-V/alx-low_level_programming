#include "main.h"

/**
 * leet - encodes a string into 1337 by replacing letters with digits
 *
 * @n: input variable
 *
 * Return: encoded n
 */
char *leet(char *n)
{
	int i, x;
	int find[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == find[x])
			{
				n[i] = replace[x / 2];
				x = 9;
			}
		}
	}
	return (n);
}
