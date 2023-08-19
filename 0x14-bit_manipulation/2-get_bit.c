#include <stdio.h>
#include <unistd.h>
#include"main.h"


/**
 * get_bit - The code give output of the bit value at a given index.
 *
 *
 * @n: The variable output a number to check bits
 * @index: The bits checked by this index
 * Return: -1 if there is an error or value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))

		return (-1);

	divisor = 1UL << index;

	check = n & divisor;

	if (check == divisor)

		return (1);

	return (0);
}
