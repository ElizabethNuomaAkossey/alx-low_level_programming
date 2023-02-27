#include "main.h"

/**
 * _strlen - function that returns length of  a string
 * @s: string
 * Return: Length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
