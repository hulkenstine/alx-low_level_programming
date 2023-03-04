#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int c, b;

		for (c = 1; c <= size; c++)
		{
			for (b = c; b < size; b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= c; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
