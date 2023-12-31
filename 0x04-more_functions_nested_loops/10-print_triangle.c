#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print a triangle
 * @#: Use to print triangle
 * @size: Size of the triangle
 * If size is 0 or less, function print only a new line
 */

void print_triangle(int size)
{
	int h, i, j;

	h = 0;
	i = size - 1;

	while (h < size)
	{
		i = size - 1 - h;
		j = h + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		h++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}

}
