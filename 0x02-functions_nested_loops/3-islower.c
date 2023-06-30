#include "main.h"

/**
* _islower -This function checks if a character is lowercase
* it compares the charcater's ASCII value with the
* ASCII values of lowercase letters
* @c: This is the character to be checked in the function
* Return: 1 indicating character is lowercase, 0 to indicate otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
