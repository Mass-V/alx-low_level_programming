#include "holberton.h"

/**
 * _isalpha - checks for uppercase & lowercase characters in input
 *@c: sinlge charachter of input
 * Return: 1 for uppercase or lowercase otherwise 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c >= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
