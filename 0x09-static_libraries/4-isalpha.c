#include "main.h"
#include <stdio.h>

/**
  * _isalpha - checks for alphabets
  * @c: the number to check
  *
  * Return: 1 if alphabet or 0 if not
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
