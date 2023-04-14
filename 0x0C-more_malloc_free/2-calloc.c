#include "main.h"
/**
* *_memset - set a constant byte
* @s: memory area
* @b: char to copy
* @n: number of copy
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x; 

	for (x = 0; x < n; x++)
	{
	s[x] = b;
	}
	return (s);
}
/**
* *_calloc - allocates memory for an array
* @nmemb: elements in the array
* @size: size of elements
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
	return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
	return (NULL);
	_memset(s, 0, nmemb * size);
	return (s);
}
