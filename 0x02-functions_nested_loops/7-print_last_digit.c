#include "main.h"

/**
 * print_last_digit -This function prototype prints the last digit
 * of a number
 * @n: The variable number
 *
 * Return: The function to return the value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;

	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');

	return (x);
}
