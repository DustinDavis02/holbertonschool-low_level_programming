#include"main.h"
/**
 * _puts - prints string with a new line.
 * @str: string that is printed
 *
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
			}
	
	_putchar('\n');
}
