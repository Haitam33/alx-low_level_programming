#include "function_pointers.h"

/**
 * int_index - searches for an integer in array of integers
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function used to compare values
 *
 * Return: first index that cmp doesn't return 0
 *        and (-1) if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size > 0 && cmp && size && array)
		for (x = 0; x <= size; x++)
			if (cmp(array[x]))
				return (x);
	return (-1);

}
