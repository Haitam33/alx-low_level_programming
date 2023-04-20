#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - print strings and newline
* @separator: string to print between numbers
* @n: number of integers
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *s;
	va_list list;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(list, char *);
		if (!s)
			s = "(nil)";
		printf("%s", s);
		if (separator && x != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
