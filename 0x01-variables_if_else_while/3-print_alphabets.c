#include <stdio.h>
/**
 * main - Displays message in terminal
 *
 * Return: 0 if succesful
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
