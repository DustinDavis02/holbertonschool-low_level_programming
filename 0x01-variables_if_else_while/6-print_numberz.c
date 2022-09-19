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

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
