#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 with a given index.
 * Description: Check the bit set with an index.
 *
 * @n: The set number.
 * @index: index at which to set bit
 *
 * Return: 1 if it worked, or -1 if an error takes place
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
}
