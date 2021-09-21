#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int n, x;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (n = 0; n < height; n++)
	{
		array[n] = malloc(sizeof(int) * width);
		 if (array == NULL)
		 {
			 free(array);
			 return (NULL);
		 }

		 for (x = 0; x < width; x++)
		 {
			 array[n][x] = 0;
		 }
	}
	return (array);
}
