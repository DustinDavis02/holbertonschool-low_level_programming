#include"main.h"
/**
 * more_numbers - prints number 0-14 ten times
 *
 *
 *
 *
 */

void more_numbers(void)
{

	int i = 0;
	int c = 0;

	while (c <= 9)
	{
		while (i <= 14)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;

		}
	_putchar('\n');
	c++;
	i = 0;
	}
}
