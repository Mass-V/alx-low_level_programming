#include "main.h"

/**
 * *_strcat - concatenates two string by appending string src to string dest
 * @src: source string
 * @dest: destination string
 * Return: Always dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
