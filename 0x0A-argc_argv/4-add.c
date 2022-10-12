#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the two numbers added to eachother followed by a new line.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1 unless 0
 */

int main(int argc, char **argv)
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	sum = 0;
	while (argv[i] != argv[argc])
	{
		if  (atoi(argv[i]) == '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
