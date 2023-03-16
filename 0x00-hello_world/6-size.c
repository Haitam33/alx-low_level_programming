#include <stdio.h>
/**
 * main - a C program that prints the size of various types of variables
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte\n", sizeof(char));
	printf("Size of an int: %ld bytes\n", sizeof(int));
	printf("Size of a long int: %ld bytes\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of a float: %ld bytes_\n", sizeof(float));
return (0);
}
