#include"main.h"
/**
 * _strlen - displays length of the string
 * @s: the vaiable that the loop finds how many strings
 *
 * Return: c for number of strings
 */

int _strlen(char *s)
{
	int c = 0;
		while (s[c] != '\0')
			c++;
		return (c);
}
