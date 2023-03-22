#include "main.h"
#include <stdio.h>


/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main()

{

	int i, n;
	int t1 = 0, t2 = 1;
	int nextTerm = t1 + t2;
	
	n = 50;
	printf("%d, %d, ", t1, t2);

	for (i = 3; i <= n; ++i) 
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return 0;
}
