#include"main.h"
/**
 * print_triangle - Displays a triangle
 * @size: size of triangle
 *
 *
 *
 */

void print_triangle(int size)
{
	int i, c, p;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (c = 1; c <= size - i; c++)
			{
				_putchar(' ');
			}
			for (p = 1; p <= i; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
