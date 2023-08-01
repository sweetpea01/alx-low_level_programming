#include <stdio.h>
#include "main.h"

/**
 * main - function that prints all arguments it receives
 * @argc: variable name that prints the number of arguments
 * @argv:variable name that prints the array of arguments
 *
 * Return: Each and evry time  0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
