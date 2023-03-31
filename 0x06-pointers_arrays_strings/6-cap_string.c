#include "main.h"

/**
 *  cap_string - capitalizes all words of a string.
 *
 * @str: input string.
 *
 * Return: @str.
 */

char *cap_string(char *str)
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
