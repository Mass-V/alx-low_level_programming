#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(vlist, n);

	for (i = 0 ; i < n; i++)
	{
		str = va_arg(vlist, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);

		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(vlist);
}
