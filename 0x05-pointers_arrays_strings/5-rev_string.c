#include "main.h"
/**
 * rev_string - Prints string in reverse
 * @s:  string to print in reverse
 *
 *
 *
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	char *tmp1, *tmp2, tmp3;

	tmp1 = s;
	tmp2 = s;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	for (i = 0; i < length - 1; i++)
	{
		tmp2++;
	}
	for (i = 0; i < length / 2; i++)
	{
		tmp3 = *tmp2;
		*tmp1 = *tmp1;
		*tmp1 = tmp3;
		tmp1++;
		tmp2--;
	}
}
