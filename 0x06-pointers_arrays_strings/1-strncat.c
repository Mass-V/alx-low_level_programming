#include "main.h"

/**
 * _strncat - concatenates two strings by appending n characters of src to dest
 *
 * @src: source string
 * @dest: destination string
 *
 * Return: Always pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, i;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (i = 0; i < n; i++)
	{
		dest[x + i] = src[i];
		if (src[i] == '\0')
			i = n;
	}

	return (dest);
}
