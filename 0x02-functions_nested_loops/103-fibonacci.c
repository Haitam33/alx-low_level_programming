#include "main.h"
#include <stdio.h>


/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)

{

	long int i, n;
	long int t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;
	long int sum = 0;

	n = 34;

	for (i = 3; i <= n; ++i)
	{
		if (nextTerm % 2 == 0)
			sum = sum + nextTerm;
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("%ld\n", sum);
	return (0);
}
