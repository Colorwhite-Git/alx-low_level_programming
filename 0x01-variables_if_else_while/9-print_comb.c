#include <stdio.h>

/**
 * main - main block function
 * Description: Print all possible combinations for single-digit numbers
 * Numbers must be separated by comma and followed by space
 * Numbers are printed in ascending order
 * Used only `putchar` to print to console(4 times only)
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
