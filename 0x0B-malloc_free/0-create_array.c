#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates array with character
 * @size: size of the array
 * @c: character used in array
 *
 * Return: s if array was made, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	i = 0;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
