#include "main.h"

/**
 * reverse_array - reverse function
 * Description: reverse the content of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
