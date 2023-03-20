#include <stdio.h>
/**
 * main - print all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 0;

	for (y = 0; y < 100; y++)
	{
		x = y + 1;
		for (x = y + 1; x < 100; x++)
		{
			putchar('0' + (y / 10));
			putchar('0' + (y % 10));
			putchar(' ');
			putchar('0' + (x / 10));
			putchar('0' + (x % 10));

			if (y / 10 != 9 || y % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
		putchar('\n');
		return (0);
}
