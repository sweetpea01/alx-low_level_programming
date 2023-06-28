#include "main.h"

/**
 * main.h -This is the header file
 * print_alphabet - This is the function prototype
 * Description: The function prints all alphabet letters
 * in lowercase beginning
 * from a and finishing with z and then
 * followed by a new line
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
