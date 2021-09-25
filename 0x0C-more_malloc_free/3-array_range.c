#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * creates an array of integers
 * @min: First array element
 * @max: Last array element
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (max < min)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
