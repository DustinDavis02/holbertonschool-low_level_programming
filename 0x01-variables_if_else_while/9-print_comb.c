#include<stdio.h>
/**
* main - Prints numbers 0-10
*
* Return: 0 if runs successful
*
*/

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i == 9)
break;
putchar(',');
putcgar(' ');
}
putchar('\n');
return (0);
}
