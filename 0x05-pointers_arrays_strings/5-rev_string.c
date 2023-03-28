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

	while (s[imax] != '\0')
	{
		imax++;
	}

	char c = s[0];
	for (int i = 0; i < imax; i++)
	{
		imax--;
		c = s[i];
		s[i] = s[imax];
		s[imax] = c;
	}
}
