#include "main.h"

/**
 * print_alphabet - order from a to z
 *
 *Return: void
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');

}
