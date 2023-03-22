#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print *name
 * @name: name
 * @f: function print name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
