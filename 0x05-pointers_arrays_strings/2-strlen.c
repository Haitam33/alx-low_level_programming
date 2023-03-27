#include "main.h"

/**
 *  strlen - returns the length of a string.
 *
 * @s: input.
 *
 **/

int _strlen(char *s)
{
	while (*s != '\0')
	{
		*s++;
	}
	return(*s);
}
