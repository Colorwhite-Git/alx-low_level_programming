#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: The program prints all numbers
 *		of base 16 in lowercase
 * Return: Alway (0) Success
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
	putchar('i < 10 ? i + '0' : i - 10 + 'a'');
	}
	putchar('\n');
	return (0);
}
