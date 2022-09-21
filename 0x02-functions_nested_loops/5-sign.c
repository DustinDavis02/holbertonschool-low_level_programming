#include"main.h"
/**
 * print_sign - Print the sign of a number.
 * @n: the variable for any sign.
 *
 *
 *
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
