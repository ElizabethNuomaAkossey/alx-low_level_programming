#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}
