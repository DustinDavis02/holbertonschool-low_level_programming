#include"main.h"
/**
 * print_rev - Prints the string in reverse.
 * @s: the string that is being reversed.
 *
 *
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	for (i = count; i >= 0; --i)
	{
		if (i == count)
		{
			--s;
			continue;
		}
		_putchar(*s);
		--s;
	}
	_putchar('\n');

}
