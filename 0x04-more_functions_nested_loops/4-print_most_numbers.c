#include "main.h"

/**
 * print_most_numbers - This function prints the numbers, from 0 to 9,
 * Except 2 and 4, and then followed by a new line
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
