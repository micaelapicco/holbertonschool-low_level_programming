#include <stdio.h>

/**
 * main - fizz buzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			if (n == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (n % 3 != 0 || n % 5 != 0)
		{
			printf("%d ", n);
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
	printf("\n");
	}
	return (0);
}
