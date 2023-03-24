#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @const: pointer
 * @format: format types of arguments
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{

	int i = 0, j = 0;
	char *separator = "";

	list_f date[] = {
	{"c", print_c},
	{"i", print_i},
	{"f", print_f},
	{"s", print_s},
	{NULL, NULL}
	};

	va_list list;
	va_start (list, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (date[j] != '\0')
		{
			if (format[i] == date[j].letter[0])
			{
				(date[j].f)(list);
				separator = ", ";
			}
			
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
void print_s(va_list list)
{
	char *s;

	s = va_arg(list, char*);
	if(!s)
		s = "(nil)";

	printf("%s", s);
}
