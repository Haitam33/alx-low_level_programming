#include "main.h"

/**
 * flip_bits - returns the number of bits you would need 
 * 		to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, c = 0;
	unsigned long int a;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		a = exclusive >> x;
		if (a & 1)
			c++;
	}

	return (c);
}

