#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 * A new line will follow
 * Use the void more_numbers(void)
 * Use _putchar only 3 times
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar((y / 10) + '0');

			_putchar((y % 10) + '0');
		}

		_putchar('\n');
	}

}
