#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x;
	long int largest;
	long int y;

	x = 612852475143;
	largest = -1;

	while (x % 2 == 0)
	{
		largest = 2;
		x /= 2;
	}

	for (y = 3; y <= x * x; y = y + 2)
	{
		while (x % y == 0)
		{
			largest = y;
			x = x / y;
		}
	}
	if (x > 2)
		largest = x;
	printf("%ld\n", largest);

	return (0);
}
