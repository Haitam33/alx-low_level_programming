#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: the memory area.
 * @src: memory to copie.
 * @n: number of bytes pointed to copie.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y = n;

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
