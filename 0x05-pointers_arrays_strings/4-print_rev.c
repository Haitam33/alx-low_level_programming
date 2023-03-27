#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @str: input.
 *
 **/

void print_rev(char *s)
{
	int i = 0;
	
	i = _strlen(s);
	while (s[i] >= s[0])
	{
		putchar(s[i]);
		i--;
	}
		putchar('\n');
}
