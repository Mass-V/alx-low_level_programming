#include <stdio.h>
#include <stdlib.h>

/**
 * main - multplies 2 num
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int i;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", i);
	return (0);
}
