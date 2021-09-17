#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to string arguments passed.
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc >= 0)
		printf("%d\n", argc - 1);
	return (0);
}
