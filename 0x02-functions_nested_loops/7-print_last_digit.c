#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int rem;

	rem = (num % 10);

	if (rem < 0)
	{
		rem = (-1 * rem);
	}

	_putchar(rem + '0');
	return (rem);
