#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase,
 * followed by a new line.
 * Return: void (Success)
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
