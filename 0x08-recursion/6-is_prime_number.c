#include "main.h"
/**
 * prime_checker - checks for prime number.
 * @n: variable to check prime
 * @i: half the result by inself then passes through i-1, then checks greather than 0
 *
 * Return: prime number
 */

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

/**
 * is_prime_number - runs prime_checker
 * @n: input to check
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}
