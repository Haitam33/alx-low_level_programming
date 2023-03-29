#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: input string.
 *
 * Return: @str.
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = ((str[i] - 'a') + 'A');
		i++;
	}
	return (str);
}
