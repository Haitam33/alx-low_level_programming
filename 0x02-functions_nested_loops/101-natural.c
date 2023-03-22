#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void main()
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
	return (0)
	
}
