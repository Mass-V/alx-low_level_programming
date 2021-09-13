#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: source string
 * @accept: comparison string
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + 1);
		}
	}
	return (NULL);
}
