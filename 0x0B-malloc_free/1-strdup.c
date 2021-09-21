#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string pointer
 * Return: 0
 */
char *_strdup(char *str)
{
	int n, size;
	char *array;

	if (str == NULL)
		return (NULL);

	for (size = 0; size <= *str; size++)
	{
	}

	size += 1;
	array = malloc(sizeof(char) * size);

	for (n = 0; n < size; n++)
		array[n] = str[n];

	if (array == NULL)
		return (NULL);
	return (array);
}
