#include"main.h"
/**
 * * _isupper - Checks unsigned character for uppercase
 * @c: variable for the letter
 *
 * Return: 1 if C is uppercase other wise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
