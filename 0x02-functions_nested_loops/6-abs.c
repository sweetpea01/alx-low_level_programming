#include "main.h"

/**
 * _abs - Function to compute the absolute value of an integer
 * @n: This is the integer to compute the absolute value of
 *
 * Return: This function returns the absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
