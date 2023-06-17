#include <stdio.h>

/**
 *main = output prints single numbers of base 10
 *start from 0 with new line following
 *Use putchar function*
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
