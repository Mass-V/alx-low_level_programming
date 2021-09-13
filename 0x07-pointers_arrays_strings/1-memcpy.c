#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area destination pointer
 * @src: memory area source
 * @n: no of bytes to be copied
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
