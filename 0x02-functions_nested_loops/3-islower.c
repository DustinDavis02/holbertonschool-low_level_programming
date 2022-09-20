#include"main.h"
/**
* _islower(int c) - checks for lowercase
*
* Return: 0 if lowercase return 1 if not.
* 
*/

int _islower(int c)
{
int q;

for (q = 'a'; q <= 'z'; q++)
{
if (c == q)
return (1);
}
return (0);
}
