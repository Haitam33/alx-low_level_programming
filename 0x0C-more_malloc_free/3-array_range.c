#include "main.h"

/**
* *array_range - creates an array of integers
* @min: minimum values
* @max: maximum values
* Return: pointer to the new array
*/

int *array_range(int min, int max)
{
	int *a;
	int x, size;

	if (min > max)
	return (NULL);
	size = max - min + 1;
	a = malloc(sizeof(int) * size);
	if (a == NULL)
	return (NULL);
	for (x = 0; min <= max; a++)
	a[x] = min++;
	return (a);
}
