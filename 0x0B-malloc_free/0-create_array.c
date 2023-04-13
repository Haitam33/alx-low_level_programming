#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array.
 * @c: character to initialize array with
 *
 * Return: x or NULL if malloc fails or if size == 0
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(size * sizeof(char));
		if (x == NULL)
		{
			return (NULL);
		}
	i = 0;	
	while (i < size)
	{
		x[i] = c;
		i++;
	}
	x[i] = '\0';
	return (x);

}
