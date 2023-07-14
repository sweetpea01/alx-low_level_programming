#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: the number to return the factorial from
 *
 * Return: factorial of n or
 * return -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
