#include<stdio.h>
/**
 * main - Displays message in terminal
 *
 * Return: 0 if succesful
 */

int main(void)
{
  
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(li));
printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
printf("Size of float: %zu byte(s)\n", sizeof(f));

 return (0);
}
