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
	char temp;

	i = -1;
	while (++i < --n)
	{
		temp = tab[i];
		tab[i] = tab[n];
		tab[n] = temp;
	}
}
