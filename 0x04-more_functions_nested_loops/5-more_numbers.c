#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 -10 times
 *
 */
void more_numbers(void)
{
	int x;
	int y;

	y = 0;
	while (y <= 9)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		y++;
		_putchar('\n');
	}
}
