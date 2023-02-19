#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * separated by , and space
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}
