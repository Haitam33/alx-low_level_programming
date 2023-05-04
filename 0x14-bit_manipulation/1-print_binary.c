#include "main.h"

/**
 * print_binary - converts a binary number to an unsigned int.
 * @n: number to print
 *
 */
void print_binary(unsigned long int n)
{
	int x, c = 0;
	unsigned long int a;

	for (x = 63; x >= 0; x--)
	{
		a = n >> x;

		if (a & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

