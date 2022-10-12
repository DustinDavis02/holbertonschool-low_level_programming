#include <stdio.h>

/**
 * main - Prints all statments it receives
 * @argc: The number of statements given to the program
 * @argv: An array of pointers to the statement
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (*argv != 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
