#include <unistd.h>

/**
 * _putchar - fuunction that writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 to signify (success).
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char d)
{
	return (write(1, &d, 1));
}
