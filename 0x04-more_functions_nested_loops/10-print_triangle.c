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
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
		}
	}
}
