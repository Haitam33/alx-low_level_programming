#include <stdio.h>
#include "main.h"

/**
  * _islower - checks for lowercase character.
  * @c: is the number to check
  * return: 0 if not lowercase 
  * return: 1 if lowercase
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
