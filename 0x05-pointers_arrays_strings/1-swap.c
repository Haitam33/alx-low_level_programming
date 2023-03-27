#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a: first number.
 * @b: 2nd number.
 **/

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
