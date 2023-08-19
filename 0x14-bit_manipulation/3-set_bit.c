#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * set_bit - With an index given, function set value to 1.
 *
 * Description: The code verify the bit with an index.
 *
 * @n: Variable number to set.
 * @index: The bit index
 *
 * Return: 1 if it worked, or -1 if an error takes place
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = 1UL << index;
	*n = *n | set;

	return (1);
}
