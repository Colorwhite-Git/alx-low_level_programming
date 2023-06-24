#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * Description: Use only  _putchar to print & '#' to print square.
 */

void print_square(int size)
{
	int a, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		y++;
	}
}
