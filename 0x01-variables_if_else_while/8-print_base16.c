#include<stdio.h>
/**
* main - Prints numbers of base 16 in lowercase
*
* Return: 0 if runs successful
*
*/

int main(void)
{
int i;
char x;

for (i = 0; i < 10; i++
putchar((i % 10) + '0');
for (x = 'a'; x < 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
