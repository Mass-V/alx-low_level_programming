#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1 input
 * @s2: string 2 input
 * Return (0);
 */
char *str_concat(char *s1, char *s2)
{
	int n, size1, size2;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (size1 = 0; size1 <= *s1; size1++)
	{
	}

	for (size2 = 0; size2 <= *s2; size2++)
	{
	}

	array = malloc(sizeof(char) * (size1 + size2 + 1));

	if (array == NULL)
		return (NULL);

	while (*s1)
	{
		array[n] = *s1;
		n++;
		s1++;
	}
	while (*s2)
	{
		array[n] = *s2;
		n++;
		s2++;
	}
	return (array);
}
