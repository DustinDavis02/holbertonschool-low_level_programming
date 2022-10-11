#include "main.h"
/**
 * factorial - returns factorial of the given number
 * @n: number that factorial is gathered from
 *
 * Return: return factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
