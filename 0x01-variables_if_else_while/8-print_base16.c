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
	char low;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
