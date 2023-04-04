#include "main.h"
/**
 * _memset - fills memory with a constant byte. 
 * @s: the memory area.
 * @b: the constant byte.
 * @n: number of bytes pointed by s.
 * Return: memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
