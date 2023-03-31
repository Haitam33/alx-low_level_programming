#include "main.h"

/**
 *  leet - encodes a string into 1337.
 *
 * @str: input string.
 *
 * Return: @str.
 */

char *leet(char *str)
{
	int x;
	int y;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	x = 0;
	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; subs[y] != '\0'; y++)
			if (str[x] == subs[y])
				str[x] = le[y / 2];
	}
	return (str);
}
