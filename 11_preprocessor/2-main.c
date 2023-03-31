#include "stdio.h"
/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line.
 * Return: Nothing.
 */
#ifndef __FILE__
#define __FILE__
#endif

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
