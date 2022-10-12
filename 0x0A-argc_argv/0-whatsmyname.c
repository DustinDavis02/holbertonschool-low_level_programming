#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the program name, followed by a new line
 * @argc: The number of arguments given to the program
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (EXIT_SUCCESS);
}
