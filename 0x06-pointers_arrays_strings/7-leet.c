#include"main.h"
/**
 * leet - a string into leet
 * @s: string to encode to 1337
 *
 * Return: pointer to leet string
 *
 */

char *leet(char *s)
{
	char leet[5] = {'4', '3', '0', '7', '1'};
	char upper[5] = {'a', 'e', 'o', 't', 'l'};
	char lower[5] = {'A', 'E', 'O', 'T', 'L'};
	int i;
	int len = 0;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((*s == upper[i]) || (*s == lower[i]))
				*s = leet[i];
		}
		len++;
		s++;
	}
	s -= len;
	return (s);
}
