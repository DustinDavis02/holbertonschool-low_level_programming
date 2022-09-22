#include"main.h"
/**
 * print_numbers - Display numbers 0 through 9
 *
 *
 *
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
