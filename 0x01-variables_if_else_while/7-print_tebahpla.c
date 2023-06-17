#include <stdio.h>
/**
 *main - output prints the lowercase alphabet in reverse.
 *Using putchar function
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
