#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * clear_bit - At a given index, code put the bit value to 0.
 * Description: Gives the bit value to 0.
 *
 *
 * @n: parameter
 *
 * @index: index
 *
 * Return: 1 if works, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
