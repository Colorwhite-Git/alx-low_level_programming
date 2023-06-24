#include "main.h"
#include <stdio.h>

/**
 * main - main entry point
 * Print numbers from 0 to 100
 * Description: For multiples of three, Print 'Fizz'
 * instead of the number
 * For multiples of five print 'Buzz'.
 * Print 'FizzBuzz' for numbers whic are  multiples of both 3 & 5
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d", x);
		}
	}

	printf("\n");

	return (0);
}
