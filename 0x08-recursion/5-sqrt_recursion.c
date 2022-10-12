#include "main.h"
/**
 * sqrt_find - Checks for square root of c
 * @i: guess at square root
 * @c: variable to find square root
 *
 * Return: square root of c or -1
 */

int sqrt_find(int i, int c)
{
	if (i * i == c)
		return (i);
	if (i * i > c)
		return (-1);
	return (sqrt_find(i + 1, c));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: variable to find square root
 *
 * Return: square root of @n or -1)
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_find(1 , n));
}
