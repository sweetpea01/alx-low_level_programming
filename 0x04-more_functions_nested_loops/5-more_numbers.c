#include "main.h"

/**
 * more_numbers - This function prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int b, c;

	for (c = 0; c < 10; c++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
		}
		_putchar('\n');
	}
}
