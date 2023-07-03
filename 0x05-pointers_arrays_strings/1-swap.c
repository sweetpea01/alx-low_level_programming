#include "main.h"

/**
 * swap_int - This function swaps the values of two integers
 * @a: This is the pointer to first value
 * @b: This is  the pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
