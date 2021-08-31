include "holberton.h"

/**
 * print_sign - checks wheher a number is positive or negative
 *@n: sinlge digit of input
 * Return: if positive prints '+' and 1 if negative '-' and -1 otherwise 0
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
