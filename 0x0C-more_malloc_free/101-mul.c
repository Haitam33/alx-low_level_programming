#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a digit char
 * @s: input string
 *
 * Return: 1 if a digit is found,0 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s_1, *s_2;
	int len_1, len_2, len, i, carry, digit_1, digit_2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s_1) || !is_digit(s_2))
		errors();
	len_1 = _strlen(s_1);
	len_2 = _strlen(s_2);
	len = len_1 + len_2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len_1 + len_2; i++)
		result[i] = 0;
	for (len_1 = len_1 - 1; len_1 >= 0; len_1--)
	{
		digit_1 = s_1[len_1] - '0';
		carry = 0;
		for (len_2 = _strlen(s_2) - 1; len_2 >= 0; len_2--)
		{
			digit_2 = s_2[len_2] - '0';
			carry += result[len_1 + len_2 + 1] + (digit_1 * digit_2);
			result[len_1 + len_2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len_1 + len_2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
