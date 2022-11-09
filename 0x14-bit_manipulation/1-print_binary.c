#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */

void print_binary(unsigned long int n)
{

	unsigned long int n_copy = n, task = 1;
	int len = 0;

	while (n_copy > 0)
	{
		len++;
		n_copy >>= 1;
	}
	len -= 1;

	if (len > 0)
		task = task << len;

	while (task > 0)
	{
		if (n & task)
			_putchar('1');
		else
			_putchar('0');

		task >>= 1;
	}
}
