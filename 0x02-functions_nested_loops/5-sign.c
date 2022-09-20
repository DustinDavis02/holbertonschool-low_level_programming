#include"main.h"
/**
 * _itsalpha - Print the sign of a number.
 * @n: the variable for any sign.
 *
 *
 *
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
