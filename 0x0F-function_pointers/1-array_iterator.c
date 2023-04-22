#include "function_pointers.h"

/**
 * array_iterator - executes a function give
 *	as a parameter on each element of array.
 * @array: array to execute
 * @size: size of array.
 * @action: pointer to the function.
 *
 * Return: (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
