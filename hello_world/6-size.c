#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{	int intType;
	long int longintType;
	long long int longlongintType;
	char charType;
	float floatType;
	printf("Size of int: %zu bytes\n",sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of char: %zu bytes", sizeof(charType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
