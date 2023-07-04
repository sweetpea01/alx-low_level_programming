#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - this function searches a string for any of a set of bytes
 * @s: this is the string to search
 * @accept: this is the string containing the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; *s != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
