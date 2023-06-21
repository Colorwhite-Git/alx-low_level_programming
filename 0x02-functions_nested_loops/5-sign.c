#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: check the type int integer, either negative or positive
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 if positive, 0 if -1 if negative and 0 if otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
