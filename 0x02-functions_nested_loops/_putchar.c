#include <unistd.h>

/**
 * _putchar - This is useful for writing a character to the standard output
 * Return: Always return the number of characters written on (Success)
 */
int _putchar(char d)
{
return write (1, &d, 1);
}
