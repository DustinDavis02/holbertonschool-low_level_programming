#include"main.h"
/**
 * print_sign - Print the sign of a number.
 * @c: the variable for any sign.
 *
 * Return: 0 if zero, 1 if < 0, or -1 if > 0
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
