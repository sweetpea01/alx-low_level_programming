#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the number
 * of arguments passed to the program
 * @argc: variable name to print the number of arguments
 * @argv: variable nameto print the array of arguments
 *
 * Return: 0 to mean (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
