#include <stdio.h>
/**
 *main -->> prints lowercase alphabets with the exception of q and e
 *Description -->> Program that prints lowercase alphabets
 *It follows a new line using putchar function
 *Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
