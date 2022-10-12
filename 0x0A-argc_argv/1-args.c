#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: The number of arguments given to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
