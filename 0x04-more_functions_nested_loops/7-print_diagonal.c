#include "main.h"

/**
*  print_diagonal - draws a diagonal line on the terminal.
*
*@n: the number of times the character \ should be printed.
*/

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
					putchar('\\');
				else if (y < x)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
