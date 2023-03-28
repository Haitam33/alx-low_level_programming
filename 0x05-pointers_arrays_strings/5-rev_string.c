#include "main.h"

/**
 *  rev_string - reverses a string.
 *
 * @s: input.
 *
 **/

void rev_string(char *s)
{
	int imax = 0;
	char c = s[0];
	int i;
	while (s[imax] != '\0')
	{
		imax++;
	}

	for (i = 0; i < imax; i++)
	{
		imax--;
		c = s[i];
		s[i] = s[imax];
		s[imax] = c;
	}
}
