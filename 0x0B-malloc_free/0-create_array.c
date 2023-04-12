#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	while (i < size)
	{
		x[i] = c;
		i++;
	}
	x[i] = '\0';
	return (x);

}
