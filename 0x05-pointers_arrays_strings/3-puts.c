#include "main.h"

/**
 * _puts - print a string
 * @str: char array string type
 * Description: Use only _putchar
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
