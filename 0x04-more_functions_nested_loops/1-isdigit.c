#include "main.h"

/**
 * _isdigit - This function prototype checks for a digit (0 through 9)
 * @c:This is the character to be checked
 *
 * Return: Always 1 if c is a digit,and  0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
