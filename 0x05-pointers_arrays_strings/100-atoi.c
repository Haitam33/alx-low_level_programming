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
	int sign;
	int num;

	sign = 1;
	num = 0;
	while ((*s == ' ') || (*s == '\t') || (*s == '\n')
		|| (*s == '\v') || (*s == '\f') || (*s == '\r'))
		s++;
	if (*s == '-')
		sign = -1;
	while ((*s == '-') || (*s == '+'))
		s++;
	while (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + ((int)*s - '0');
		s++;
	}
	return (sign * num);
}
