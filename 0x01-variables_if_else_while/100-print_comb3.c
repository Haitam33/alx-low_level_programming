#include <stdio.h>
/**
 * main - print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar('0' + x % 10);
			putchar('0' + y % 10);
			if (x == 8 && y == 9)
			{
				putchar('\n');
				goto end;
			}
			putchar(',');
			putchar(' ');
		}
	}
		end:
		putchar('\n');
		return (0);
}
