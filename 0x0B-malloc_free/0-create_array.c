#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 *                specific char
 * @size: size input
 * @c: char input
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		array[n] = c;
	return (array);
}
