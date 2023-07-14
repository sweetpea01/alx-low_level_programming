#include <unistd.h>

/**
 * _putchar - This function writes character d to the stdout
 * @d: This is the character to print
 *
 * Return: 1 (success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char d)
{
	return (write(1, &d, 1));
}
