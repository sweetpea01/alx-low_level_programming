#include <stdio.h>
#include "main.h"

/**
 * main - this function prints the name of the program
 * @argc: argument count to rep the number of arguments
 * @argv: argument vector to rep the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
