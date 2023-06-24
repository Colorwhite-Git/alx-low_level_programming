#include <stdio.h>

/**
 * main - main entry point,  Print numbers from 0 to 100
 * Description: For multiples of three, Print 'Fizz'
 * Print 'FizzBuzz' for numbers whic are  multiples of both 3 & 5
 * Return: 0
 */

int main(void)
{
	int x;

	x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (x % 3 == 0)
		{
			printf("Fizz");
		}

		else if (x % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
			printf(" ");
		}

		x++;

	}

	printf("\n");

	return (0);
}
