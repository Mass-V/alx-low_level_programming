#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, n, value, check;

	value = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[x] == accept[n])
				{
					value++;
					check = 1;
				}
		}

		if (check == 0)
			return (value);
	}

	return (value);
}
