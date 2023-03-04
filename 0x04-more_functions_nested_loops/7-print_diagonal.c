#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int c, b;

		for (c = 0; c < n; c++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == c)
					_putchar('\\');
				else if (b < c)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
