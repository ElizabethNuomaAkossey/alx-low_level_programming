#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Print n times table starting with 0
 * @n: number times table (0 < n <= 15)
 * Return: no return
 */

void print_times_table(int n)
{
	int a, b, m;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				m = a * b;
				_putchar(',');
				_putchar(' ');
				if (m <= 9)
				{
					_putchar(' ');
					_putchar(m + 48);
				}
				else
				{
					_putchar(((m / 100) % 10) +  48);
					_putchar(((m / 10) % 10) + 48);
					_putchar((m % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
