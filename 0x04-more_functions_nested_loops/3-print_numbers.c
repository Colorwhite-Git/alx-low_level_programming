#include "main.h"

/**
 * print_numbers -Prints numbers from 0 to 9
 * Follow by a new line
 */

void print_numbers(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		_putchar(p + '0');
	}
	_putchar('\n');
}
