#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int x;
	int y;
	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			print_alphabet();
		}
		_putchar('\n');
	}

}
