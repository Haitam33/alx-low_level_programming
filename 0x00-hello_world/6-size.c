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
 

printf("Size of a char: %ld byte\n",sizeof(charType));
printf("Size of an int: %ld bytes\n",sizeof(integerType));
printf("Size of a long int: %ld bytes\n",sizeof(longType));
printf("Size of a long long int: %ld bytes\n",sizeof(longlongType));
printf("Size of a float: %ld bytes",sizeof(floatType));
   

    return (0);
}
