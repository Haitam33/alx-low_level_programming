#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: string input.
 *
 * Return: integer value.
 **/

int _atoi(char *s)
{
	unsigned int num = 0;
	int i = 0;
	int sign = 1;

	while (*(s + i))
	{
		if (*(s + i) == '-')
			sign *= -1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
			num = (num * 10) + (*(s + i) - '0');
		else if (num > 0)
			break;
		i++;
	}
	return (sign * num);
}
