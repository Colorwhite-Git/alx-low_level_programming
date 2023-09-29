#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
<<<<<<< HEAD
 * @s: pointer to s.
 */

=======
 * @s: The pointer to s.
 */

void _puts_recursion(char *s)
{
	int b = 0;

	if (s[b] == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(s[b]);
	s++;

	_puts_recursion(s);
}
>>>>>>> 2bb278bea35466f2952e54d924b8ba8c9bf23538
