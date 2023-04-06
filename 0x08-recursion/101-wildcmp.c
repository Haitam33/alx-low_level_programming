#include "main.h"

/**
 * checkstr - check if two strings are identical.
 * @s1: first string.
 * @s2: 2nd string.
 * @i: left index.
 * @j: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int checkstr(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (checkstr(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (checkstr(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (checkstr(s1, s2, i + 1, j) || checkstr(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - returns 1 if identical, 0 if not.
 * @s1: first string.
 * @s2: 2nd string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (checkstr(s1, s2, 0, 0));
}
