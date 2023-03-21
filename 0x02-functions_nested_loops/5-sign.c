#include "main.h"
#include <stdio.h>

/**
  * print_sign - prints the sign of a number.
  * @n: the number to be checked
  * Return: 1 if the number is positive, -1 if negative and 0 if not
  * print: + if the number is positive, - if negative and 0 if not
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
