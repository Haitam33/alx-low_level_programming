#include "main.h"

/**
 *   puts_half - prints half of a string, followed by a new line.
 *
 * @str: input.
 *
 **/

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i + 1) / 2;

	while (n < i)
	{
		putchar(str[n]);
		n++;
	}
		putchar('\n');
}
