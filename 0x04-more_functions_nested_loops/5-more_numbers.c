#include "main.h"

/**
*  more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
*
* Return: null
*/

void more_numbers(void)
{
	int x;
	int y = 0;
	while (y <= 10)
	{
		while (x <= 14)
		{
			if (x >= 10)
				_putchar('1');
			_putchar(x % 10 + '0');
			x++;
		}
		_putchar('\n');
		y++
	}
}
