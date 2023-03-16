#include <unistd.h>
/**
 * main - a C program that prints a line
 * Use the function puts and printf are not allowed
 * You are not allowed to use printf
 * Return: 1
 */
int main(void)
{
	char line[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, line, sizeof(line) - 1);

	return (1);
}
