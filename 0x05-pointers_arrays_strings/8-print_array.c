#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: arrays
 * @n: number of values to be printed
 */

void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		printf("%d", a[q]);
		if (q != n - 1)
			printf(", ");
	}
	printf('\n');
}
