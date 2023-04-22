#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its main function
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int x, y;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (y = 0; y < x; y++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (y == x - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
