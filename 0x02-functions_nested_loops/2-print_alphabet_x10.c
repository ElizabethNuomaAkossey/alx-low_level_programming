#include <stdio>
#include "main.h"

/**
 * print_alphabet_x10 - Prints 10x the alphabet in lowercase
 * followed by a new line
 * Return: void (success)
 */

void print_alphabet_x10(void)
{
	int n;
	int num;

	num = 0;

	while (num < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		num++;
		_putchar('\n');
	}
}
