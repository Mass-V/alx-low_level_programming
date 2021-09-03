#include "main.h"

/**
 * isupper - checks whether the characters are uppercase
 *@c - single alphabet character
 * Return: 1 for uppercase otherwise zero
 */
int _isupper(int c)
{
	if ((c == 'A') && (c <= 'Z'))
		return (1);
	else
		return  (0);
}
