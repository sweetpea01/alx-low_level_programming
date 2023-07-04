#include <unistd.h>

/**
 * _putchar - This function writes the character c to stdout
 * @c: this is the character to print
 *
 * Return: Each and everytime on success (1).
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char d)
{
	return (write(1, &d, 1));
}
