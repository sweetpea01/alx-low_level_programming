#include <unistd.h>

/**
 * _putchar - This function writes the character c to stdout
 * @c: This is the character to print
 *
 * Return: a value of  (1) to signify succcess.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char d)
{
	return (write(1, &d, 1));
}
