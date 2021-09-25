#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * @nmemb: The number of elements
 * @size: The byte size of each element
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ch[i] = 0;

	return (ch);
}
