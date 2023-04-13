#include "main.h"
#include <stddef.h>

/**
 * *str_concat - concatenates two strings.
 *@s1:first string
 *@s2:second string
 *Return: pointer to a newly allocated space (s1 + s2)
 *or NULL treat it as an empty string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int c_i = 0;
	int len = 0;
	char *c_s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	_s = malloc(sizeof(char) * len);
	if (c_s == NULL)
		return (NULL);
	for (i = 0 ; s1[i] ; i++)
		c_s[c_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		c_s[c_i++] = s2[i];
	return (c_s);
}
