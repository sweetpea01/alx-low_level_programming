#include "main.h"

/**
 * _isupper - This function checks for uppercase characters
 * @c: This is the character to be checked
 *
 * Return: value 1 if c is uppercase, 0 if  otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
