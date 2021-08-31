#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number input
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = (n % 10);

	if (n < 0)
	{
		ld = (-1 * ld);
	}
	_putchar (ld + '0');
	return (ld);
}
