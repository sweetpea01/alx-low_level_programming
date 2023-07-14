#include "main.h"

/**
 * _print_rev_recursion - This function given prints a string in reverse
 * @s: this is the string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
