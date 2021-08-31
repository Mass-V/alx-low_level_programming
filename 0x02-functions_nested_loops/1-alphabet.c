#include "holberton.h"

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
