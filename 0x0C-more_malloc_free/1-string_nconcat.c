#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: A pointer to the concatenated space in memory. NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, x, co, ci;

	if (s1 == NULL)
		s1 = "";
	 if (s2 == NULL)
                s2 = "";

	 for (i = 0; s1[i] != '\0'; i++)
	 {
	 }
	 for (x = 0; s2[x] != '\0'; x++)
	 {
	 }

	 if (n < x)
		 x = n;
	 else
		 n = x;

	 x += i;
	 array = malloc(sizeof(char *) * (x + 1));

	 if (array == NULL)
		 return (NULL);

	 for (co = 0; co < i; co++)
		 array[co] = s1[co];
	 for (ci = 0; co < x; ci++)
	 {
		 array[ci] = s2[ci];
		 co++;
	 }
	 co++;
	 array[co] = '\0';
	 return (array);
}
