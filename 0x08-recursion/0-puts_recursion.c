#include "main.h"

/**
 * _puts_recursion - This function prints a string,
 * then followed by a new line
 * @s: This is the string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
