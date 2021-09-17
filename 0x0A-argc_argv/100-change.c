#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins tomake change of an amount of money
 * @argc: The number of arguments passed.
 * @argv: An array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int a = 25, b = 10, c = 2, d = 1;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc == 0)
	{
		return(0);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		while (cents >= a)
		{
			cents -= a;
			coins++;
		}
		while (cents >= b)
		{
			cents -= b;
			coins++;
		}
		while (cents >= c)
		{
			cents -= c;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
