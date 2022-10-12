#include"main.h"
/**
* _isalpha - Checks if a character is part of alphabet.
* @c: The unknown character the user selects.
*
* Return: 0 if character is in alphabet and 1 if not.
*/

int _isalpha(int c)
{
int q;

for (q = 'a'; q < 'z'; q++)
{
if (c == q)
return (1);
}
for (q = 'A'; q < 'Z'; q++)
{
	if (c == q)
		return (1);
}
return (0);
}
