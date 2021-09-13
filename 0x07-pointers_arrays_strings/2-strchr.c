#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a charcter in astring
 * @s: string to be serached
 * @c: character to be searched
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)

			return (s + 1);
	}

	return (NULL);
}
