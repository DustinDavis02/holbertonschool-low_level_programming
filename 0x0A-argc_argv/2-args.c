#include <stdio.h>

/**
 * main - Prints all statments it receives
 * @argc: The number of statements given to the program
 * @argv: An array of pointers to the statement
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
