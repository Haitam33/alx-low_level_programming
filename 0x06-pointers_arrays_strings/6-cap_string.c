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
	int x;
	int y;
	char sep[] = " \t\n,;.!?\"(){}";

	x = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');
	while (str[x] != '\0')
	{
		for (y = 0; sep[y] != '\0'; y++)
			if (str[x - 1] == sep[y] && (str[x] >= 'a' && str[x] <= 'z'))
				str[x] -= ('a' - 'A');
		x++;
	}
	return (str);
}
