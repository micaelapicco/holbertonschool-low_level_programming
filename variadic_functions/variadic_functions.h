#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct letter
{
	char *letter;
	void (*f)(va_list list);
} list_f;

void print_c(va_list list);
void print_i(va_list list);
void print_f(va_list list);
void print_s(va_list list);
#endif
