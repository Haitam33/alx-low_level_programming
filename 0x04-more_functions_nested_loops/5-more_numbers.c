#include "main.h"

/**
*  more_numbers - prints 10 times the numbers, from 0 to 14.
*
* Return: null
*/

void more_numbers(void)
{
	{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				putchar('1');
			putchar(y % 10 + '0');
		}
		putchar('\n');
	}
	}
}
