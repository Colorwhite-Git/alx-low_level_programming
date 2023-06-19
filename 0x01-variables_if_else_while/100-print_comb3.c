#include <stdio.h>
/**
 * main - main block function
 * Description: Print all possible combinations
 * The two digits must be different
 * Print in ascending order with two digits
 * Used only 'putchar' function (5 times)
 * No use of any variable type 'char'
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x < 56 || y < 57)
				{
					putchar(x);
					putchar(y);
					if (x < 56 || y < 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
