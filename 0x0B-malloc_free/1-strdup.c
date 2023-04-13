#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory.
 * @str: string to copy
 * Return: null if insufficient memory or str == null or
 *	a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	unsigned int x;
	unsigned int y;
	char *c;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		x++;

	c = malloc((x + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < x; y++)
	{
		c[y] = str[y];
	}

	return (c);
}
