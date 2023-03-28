#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: string input.
 *
 * Return: integer value.
 **/

int _atoi(char *s)
{
	int v;
	int n;

	n = 0;
	if (*s == '-')
	{
		s++;
		n = 1;
	}
	v = 0;
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
			v = (v * 10) + (*s - '0');
		else
			return (0);
		s++;
	}
	return ((v > 0 && n) ? -v : v);
}
