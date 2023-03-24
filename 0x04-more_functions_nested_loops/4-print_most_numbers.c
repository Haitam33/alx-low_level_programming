#include "main.h"

/**
* print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
*
* Return: null
*/

void print_most_numbers(void)
{
	int x = '0';

	while (x <= '9')
	{
		if (x != '2' || x != '4')
			_putchar(x);
		x++;
	}
	_putchar('\n');
}
