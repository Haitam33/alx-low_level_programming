#include <stdio.h>
/**
 * main - print all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar('0' + x % 10);
				putchar('0' + y % 10);
				putchar('0' + z % 10);
				if (x == 7 && y == 8 && z == 9)
					goto end;
			putchar(',');
			putchar(' ');
			}
		}
	}
end:
		putchar('\n');
		return (0);
}
