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

	n = 50;
	printf("%d, %d, ", t1, t2);

	for (i = 3; i <= n; ++i)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}
