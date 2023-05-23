#ifndef SEARCH_H
#define SEARCH_H

/*libriaries*/
#include <stdio.h>
#include <stdlib.h>

/*functions*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int start, int end, int *array);
#endif
