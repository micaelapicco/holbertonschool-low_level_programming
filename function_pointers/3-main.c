#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function calculate user input
 * @argc: argument counter
 * @argv: argument vector
 * Return: result
 */
int main(int argc, char *argv[])
{
	int num1, num2, result, operator;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2][0];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (!f || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
