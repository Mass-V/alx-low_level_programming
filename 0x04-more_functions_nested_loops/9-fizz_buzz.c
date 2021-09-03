#include <stdio.h>

/**
 * main - prints no. 1-100 with multiples of three printing fizz
 *muliples of 5 printing buzz and multiples of 3 and 5 fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (((x % 3) == 0) && ((x % 5) == 0))
			printf("FizzBuzz");

		else if ((x % 5) == 0)
			printf("Buzz");

		else if ((x % 3) == 0)
			printf("Fizz");

		else
			printf("%d", x);

		if (x == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
