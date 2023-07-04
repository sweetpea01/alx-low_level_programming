#include "main.h"

/**
 * *_memcpy - This function copies memory area
 * @dest: this is the destination memory area
 * @src: this is the memory area to copy from
 * @n: is the number of bytes to copy
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
