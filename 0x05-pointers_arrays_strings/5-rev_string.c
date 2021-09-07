#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string pointer
 */
void rev_string(char *s)
{
	int counter = 0;
	int n;
	char rev = s[0];

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (n = 0; n < counter; n++)
	{
		counter--;
		rev = s[n];
		s[n] = s[counter];
		s[counter] = rev;
	}
}
