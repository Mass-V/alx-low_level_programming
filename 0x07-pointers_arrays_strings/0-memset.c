#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointed destination
 * @b: constant byte to be used
 * @n: no of bytes to be filled
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
