#include "main.h"

/**
* _isalpha - This function checks if a character in the program
* is an alphabetic character.
* @c: This is the character to be checked in the function
*
* Return: 1 if c is a letter i.e. (lowercase or uppercase), 0 otherwise.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
