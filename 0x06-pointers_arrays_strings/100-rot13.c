#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @str: input string.
 *
 * Return: @str.
 */

char *rot13(char *str)
{
	int x;
	int y;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == d1[y])
			{
				str[x] = drot[y];
				break;
			}
		}
	}
	return (str);
}
