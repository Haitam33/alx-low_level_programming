#include "main.h"
#include <stdio.h>

/**
  * _islower - checks for lowercase
  * @c: the number to be checked
  *
  * Return: 1 if the character is lower or 0 if not
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
