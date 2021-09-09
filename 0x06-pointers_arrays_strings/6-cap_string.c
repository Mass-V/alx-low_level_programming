#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 *
 * @n: string input
 *
 * Return: n with the first letter of every word capitalized
 */
char *cap_string(char *n)
{
	int x, i;
	int separator[] = {',', ';', '.', '?', '"',
			   '(', ')', '{', '}', ' ', '\n', '\t'};

	for (x = 0; n[x] != '\0'; x++)
	{
		for (i = 0; i <= 12; i++)
		{
			if (n[x] == separator[i] && n[x + 1] != separator[i])
			{
				n[x + 1] = n[x + 1] - 32;
			if (n[x] == separator[i] && n[x + 1] == separator[i])
				break;
			}
			else if (n[x] != separator[i])
			{
				n[x + 1] = n[x + 1];
			}
		}
	}
	return (n);
}
