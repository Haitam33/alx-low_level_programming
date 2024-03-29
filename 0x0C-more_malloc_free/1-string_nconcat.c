#include "main.h"

/**
* *string_nconcat - concatenates two strings.
* @s1: append to
* @s2: concatenate from
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer to the resulting string or NUL if fail
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	len1++;
	while (s2 && s2[len2])
	len2++;
	if (n < len2)
	a = malloc(sizeof(char) * (len1 + n + 1));
	else
	a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!a)
	return (NULL);
	while (x < len1)
	{
	a[x] = s1[x];
	x++;
	}
	while (n < len2 && x < (len1 + n))
	a[x++] = s2[y++];
	while (n >= len2 && x < (len1 + len2))
	a[x++] = s2[y++];
	a[x] = '\0';
	return (a);
}
