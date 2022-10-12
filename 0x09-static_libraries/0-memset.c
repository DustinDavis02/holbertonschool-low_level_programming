#include "main.h"
/**
 * _memset - fills memory with a byte
 * @s: To fill the n bytes of buffer s with byte b
 *
 * @b: constant byte to fill s
 * @n: number of bytes to the buffer
 * Return: Pointer to memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
