#include "main.h"

/**
 * print_alphabet_x10 - This the function prototype
 * Description :
 * This function prints the alphabet 10 times
 * in lowercase followed by a new line
 */
void print_alphabet_x10(void)
{
	char b;
	int c;

	for (c = 0; c < 10; c++)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
	}
}
