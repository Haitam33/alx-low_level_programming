#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @src: input string.
 *
 * @dest: overwrited string.
 *
 * @n: number of bytes from src.
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	while (i < n && src[i] != '\0')
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
