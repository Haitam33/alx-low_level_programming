#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		print_alphabet();
		if (x != 'z')
			_putchar('\n');

	}

}
