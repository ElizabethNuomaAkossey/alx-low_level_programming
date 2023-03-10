#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to find length
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int strlent = 0;

	if (*s)
	{
		strlent++;
		strlent += _strlen_recursion(s + 1);
	}
	return (strlent);
}
