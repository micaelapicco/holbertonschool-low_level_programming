#include <stdio.h>
/**
 * main - calculate the sizeof of variables
 *
 * Return: Always 0(Success)
 */

int main(void)
{	int intType;
	long int longintType;
	long long int longlongintType;
	char charType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
