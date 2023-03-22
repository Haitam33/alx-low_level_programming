#include "main.h"
#include <stdio.h>


/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)

{

	unsigned long i, n;
	unsigned long t1 = 1, t2 = 2;
	unsigned long nextTerm = t1 + t2;

	n = 98;
	printf("%lu, %lu, ", t1, t2);

	for (i = 3; i <= n; ++i)
	{
		if (i == 98)
		{
			printf("%lu", nextTerm);
			continue;
		}
		printf("%lu, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	putchar('\n');
	return (0);
}
