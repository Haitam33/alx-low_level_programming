#include "main.h"
#include <stdio.h>


/**
 * main - the sum of all the multiples of 3 or 5
 *
 * Return: Always 0.
 */

int main()
{
	int a = 1023;
	int sum = 0;

	while (a != 0)
	{
		if ((a % 3 == 0) || a % 5 == 0)
		sum = sum + a;
		a--;
	}
	printf("%d\n", sum);
	return (0);
	
}
