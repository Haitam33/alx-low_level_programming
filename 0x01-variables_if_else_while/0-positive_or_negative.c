#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - print if the number stored in the variable n is positive or negative.
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
		return (0);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
		return (0);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}
	return (0);
}
