#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int p = 0;

	for (; str[p] != '\0'; p++)
	{
		if ((p % 2) == 0)
			_putchar(str[p]);
		else
			continue;
	}
	_putchar('\n');
}
