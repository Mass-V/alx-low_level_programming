#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer s
 * Return: length of string @s
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s++)
	{
		n++;
	}
	return (n);
}
