#include "main.h"

/**
 * _isdigit - checks whether input is a digit
 * @c: sinle digit or charcter input
 * Return: 1 if number otherwise 0
 */
int _isdigit(int c)
{
	if ((c == '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
