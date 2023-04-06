#include "main.h"

/**
 * checkpr - checks if number is prime
 * @a:number to compaire to
 * @b:input number
 * Return:result
 */
int checkpr(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (checkpr(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checkpr(2, n));
}
