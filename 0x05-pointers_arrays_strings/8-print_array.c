#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an integer array
 * Description: Numbers must be separated by comma and space
 * @a: int type array pointer
 * @n: int type integer
 * Numbers should be displayed in the same order they are stored in array.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
