#include "main.h"
#include <stdio.h>

/**
  * _abs - computes the absolute value of an integer.
  * @n: input number
  * Return: absolute value of n
  */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}
