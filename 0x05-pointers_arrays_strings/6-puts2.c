#include "main.h"

/**
 *  puts2 - prints every other character of a string.
 *
 * @str: input.
 *
 **/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
			i++;
		}
		else
			i++;
			continue;
	}
		putchar('\n');
}
