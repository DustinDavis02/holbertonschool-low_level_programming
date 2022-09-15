#include<stdio.h>
/**
 * main - Displays message in terminal
 *
 * Return: 0 if succesful
 */
int main(void)
{
char charType;
int intType;
long int longType;
long long int longlongType;
float floatType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
  
return 0;
}
