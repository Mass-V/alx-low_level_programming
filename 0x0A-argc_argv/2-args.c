#include <stdio.h>

/**
 * main - prints all arguments it receives one per line
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to string arguments passed.
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
