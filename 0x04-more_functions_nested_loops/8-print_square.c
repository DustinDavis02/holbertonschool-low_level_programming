#include"main.h"
/**
 * print_square - Displays a square
 * @size: size of the square
 *
 *
 */

void print_square(int size)
{
	int i, c;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			if ((i + 1) != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
