#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vlist, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(vlist);
}
