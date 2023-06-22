#include "main.h"

/**
 * _isupper - Entry point
 * Description: Checks for upper case character
 * @c: int type number
 * Return (1) if c is uppercase
 * Return (0) otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	
	return (0);
}
