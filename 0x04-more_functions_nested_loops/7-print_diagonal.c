#include"main.h"
/**
 * print_diagonal - Displays diagonal line
 * @n: number of times to display diagonal line
 *
 *
 *
 */

void print_diagonal(int n)
{
	int i;
	int c;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < n; c++)
			{
				if (i == j)
				{
					_putchar('\\');
					break;
				}
				else
				{
					_putchar(' ');
				}
			}
			if ((i + 1) != n)
				_putchar('\n');
		}
	}
	_putchar('\n'
		);
}
