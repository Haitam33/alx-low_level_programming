#include "main.h"

/**
 * checksr - checks the square root
 * @a: result
 * @b: input number
 *
 * Return: result
 */
int checksr(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (checksr(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number.
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checksr(1, n));
}
