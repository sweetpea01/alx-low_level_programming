#include "main.h"

/**
 * reverse_array - this function reverses an array of integers
 * @a: this is the array to be reversed
 * @n: this shows the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, x, tmp;

	x = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[x];
		a[x--] = tmp;
	}
}
