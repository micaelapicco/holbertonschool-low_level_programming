#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln =n%10;
	
	printf("Last digit of", n, "is", ln);
	if (ln > 5)
{	
	printf("and is greater than 5 and not 0");
}
{
	else if (0 < ln < 6)
	printf("and is less than 6 and not 0");
}
{	
	else if(ln ==)
	printf("and is 0");
}
{
	else 
	printf("is less than 6 and not 0");
}
	return (0);
}
