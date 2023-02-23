#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers starting with 1 and 2,
 * followed by a new line.
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	long int x1, x2, fx;

	x1 = 1;
	x2 = 2;
	printf("%ld, %ld", x1, x2);
	for (a = 0, c < 48; c++)
	{
		fx = x1 + x2;
		printf(",%ld", fx);
		x1 = x2;
		x2 = fx;
	}
	printf('\n');
	return (0);
}
