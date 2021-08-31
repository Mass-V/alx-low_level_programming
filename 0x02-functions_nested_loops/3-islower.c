#include "holberton.h"

/**
 * _islower - checks for lowercase characters in input
 *@c: single letter
 * Return: 1 for lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
