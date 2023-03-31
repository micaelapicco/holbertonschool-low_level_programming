#include "main.h"

/**
 * puts_half - print half of a string
 * @str: input character
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int n; /*numbers*/
/* with n move on string str, if n is par (% 2= 0) save n/2, else n sum 1 and divide 2 (inpar) and print str in n locates*/

	for (n = 0; str[n]; n++)
		;
	if (n % 2 == 0)
	{
		n = n / 2;
	}
	else
	{
		n = ((n + 1) / 2);
	}
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
