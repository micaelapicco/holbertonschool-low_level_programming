#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
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

	va_start(list, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (date[j].letter)
		{
			if (format[i] == date[j].letter[0])
			{
				printf("%s", separator);
				separator = ", ";
				(date[j].f)(list);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
/**
 * print_c - function that prints char.
 * @list: list
 * Return: char.
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_i - function that prints anything.
 * @list: list
 * Return: int
 */
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_f - function that prints anything.
 * @list: list
 * Return: float
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_s - function that prints anything.
 * @list: list
 * Return: string
 */
void print_s(va_list list)
{
	char *s;

	s = va_arg(list, char*);
	if (!s)
		s = "(nil)";

	printf("%s", s);
}
