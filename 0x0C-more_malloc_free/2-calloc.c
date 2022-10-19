#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * the memory is set to zero.
 * @nmemb: number of elements.
 * @size: size in bytes.
 * Return: pointer to the allocated memory.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, final = nmemb * size;
	char *at;

	if (final == 0)
		return (NULL);

	at = malloc(nmemb * size);
	if (at == NULL)
		return (NULL);

	for (i = 0; i < final; i++)
		at[i] = 0;
	return (at);
}
