#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers,
 * with values from min (included) to max (included).
 * @min: start value.
 * @max: final value.
 * Return: pointer to the array.
 **/
int *array_range(int min, int max)
{
	int i, length, *at;

	if (min > max)
		return (NULL);
	length = max - min + 1;

	at = malloc(sizeof(int) * length);
	if (at == NULL)
		return (NULL);

	for (i = 0; (i + min) <= max; i++)
		at[i] = i + min;
	return (at);
}
