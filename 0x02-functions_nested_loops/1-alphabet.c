#include "main.h"

/**
 * main.h -This is the header file
 * void print_alphabet - This is the function prototype
 */
void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		_putchar(d);
	}

	_putchar('\n');
}
