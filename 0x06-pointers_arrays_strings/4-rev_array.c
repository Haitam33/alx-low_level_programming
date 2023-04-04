#include "main.h"

/**
 *   reverse_array - reverses the content of an array of integers.
 *
 * @a: input array.
 *
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}