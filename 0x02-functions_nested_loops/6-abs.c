#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer input
 * Return: the absolute value of 'n'
 */
int _abs(int n);
{
	return n*(((n > 0) << 1) - 1);
}
