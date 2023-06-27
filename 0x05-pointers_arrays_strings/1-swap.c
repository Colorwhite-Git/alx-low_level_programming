#include "main.h"

/**
 * swap_int - function swaps the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return; 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
