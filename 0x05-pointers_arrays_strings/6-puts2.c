#include "main.h"

/**
 * puts2 - print one character out of a string
 * Description: Print 1st character, then 3rd, 5th, etc
 * @str: char array string type.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
