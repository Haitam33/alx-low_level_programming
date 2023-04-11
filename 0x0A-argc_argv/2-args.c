#include "main.h"
#include <stdio.h>

/**
* main - prints all arguments it receives.
* @argc: number of arguments in argv.
* @argv: ontains the program command line arguments
* Return: 0
*/

int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		(void) argc;
		printf("%s\n", argv[x]);
	}
	return (0);
}
