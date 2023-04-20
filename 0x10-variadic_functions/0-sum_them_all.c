#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of arguments
* Return: sum of arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	int s;
	unsigned int x;
	va_list list;

	va_start(list, n);
	for (x = 0, s = 0; x < n; x++)
		s += va_arg(list, int);

	va_end(list);
	return (s);
}
