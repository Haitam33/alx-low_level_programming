#include <stdio.h>

/**
* main - a program that prints its name, followed by a new line.
* @argc: size of argv
* @argv: contains the program command line arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
