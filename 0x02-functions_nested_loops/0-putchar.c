#include <stdio.h>
#include "main.h"
/**
  * main -  prints "_putchar"
  *
  * Return: Always 0 (secusess)
  */
int main(void)
{
	int x = 0;
	char c[8] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		putchar (c[x]);
		x++;
	}
	putchar ('\n');
	return (0);
}
