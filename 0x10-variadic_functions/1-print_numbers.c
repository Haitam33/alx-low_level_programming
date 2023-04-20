#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_numbers - prints numbers, followed by a new line. 
* @separator: - print between numbers
* @n: - number of arguments
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int x;
	va_list list;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (x = 1; x < n; x++)
		printf("%s%d", s, va_arg(list, int));
	printf("\n");
	va_end(list);
}
