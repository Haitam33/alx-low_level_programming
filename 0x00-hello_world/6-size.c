#include <stdio.h>
/**
 * main - a C program that prints the size of various types of variables
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int integerType;
long longType;
long long longlongType;
float floatType;

printf("Size of a char: %lu byte(s)\n", sizeof(charType));
printf("Size of an int: %lu byte(s)\n", sizeof(integerType));
printf("Size of a long int: %lu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongType));
printf("Size of a float: %lu byte(s)\n", sizeof(floatType));

return (0);
}
