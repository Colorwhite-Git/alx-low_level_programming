#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * largestPrimeFactor - Prints the largest prime factor
 * main - Entry point
 * @n: Parameter
 * Description: The number is 612852475143 followed by new line
 *
 * Return: n (the largest prime factor)
 */

long largestPrimeFactor(long n)
{
	long largestFactor = -1;

	while (n % 2 == 0)
	{
		largestFactor = 2;
		n /= 2;
	}

	long i;
	
	for (long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largestFactor = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		largestFactor = n;
	}

	return (largestFactor);
}

int main(void)
{
	long number = 612852475143;

	long largestPrime = largestPrimeFactor(number);

	printf("%11d\n", largestPrime);

	return (0);

}
