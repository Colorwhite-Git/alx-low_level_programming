#include "main.h"

/**
 * print_most_numbers - The main enty code
 * Description: Print numbers from 0 to 9
 * Do not include 2 & 4
 * Use _putchar twice in the code
 */

void print_most_numbers(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)

	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}

	_putchar('\n');
}
