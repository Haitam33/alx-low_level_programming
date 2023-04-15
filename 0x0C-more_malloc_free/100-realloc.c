#include "main.h"
/**
* *_realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory allocated by malloc
* @old_size: size of the allocated memory
* @new_size: new size of memory
* Return: pointer to the new allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *old_ptr;
	unsigned int x;

	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	return (malloc(new_size));
	s = malloc(new_size);
	if (!s)
	return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
		s[x] = old_ptr[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
		s[x] = old_ptr[x];
	}
	free(ptr);
	return (s);
}
