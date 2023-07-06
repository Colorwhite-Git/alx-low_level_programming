#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Reverse String using Recursion
 * @s: the parameter which a pointer to a string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);

	putchar(*s);
}
