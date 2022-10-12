#include"main.h"
/**
 * _isdigit - Checks for digit 0-9.
 * @c: the variable for the unsigned character.
 *
 * Return: 1 if its a digit 0-9 and 0 if not.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
