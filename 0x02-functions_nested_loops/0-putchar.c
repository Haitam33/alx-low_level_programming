#include "main.h"
/**
  * main -  prints "_putchar"
  *
  * Return: Always 0 (secusess)
  */
void _putchar(void)
{
	char c[8] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		putchar (c[x]);
		x++;
	}
	putchar ('\n');
}
