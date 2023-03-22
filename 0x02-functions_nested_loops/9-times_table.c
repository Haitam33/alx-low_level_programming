#include "main.h"
#include <stdio.h>

/**
  * times_table -  prints the 9 times table, starting with 0.
  */

void times_table(void)
{
	int t;
	int x;
	int y;

	for (y = 0 ; y <= 9; y++)
	{
		putchar('0');
		putchar(',');
		for (x = 1 ; x <= 9; x++)
		{
			t = x * y;
			_putchar(' ');
			if ((t / 10) == 0)
			{
			_putchar(' ');
			_putchar(t % 10 + '0');
			}
			else
			{
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			}
			if (x != 9)
			_putchar(',');
		}
		_putchar('\n');
	}
}
