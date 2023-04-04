#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the input string.
 * @c: the caracter.
 * Return: c if found a caracter or NULL if not.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return ('\0');
}
