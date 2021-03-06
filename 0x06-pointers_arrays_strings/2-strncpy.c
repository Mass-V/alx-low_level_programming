#include "main.h"

/**
 * _strncpy - copies a n charcters of a string from src to dest
 *
 * @src: source string
 * @dest: destination string
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			i = n;
	}
	return (dest);
}
