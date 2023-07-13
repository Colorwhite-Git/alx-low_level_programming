#include <stdio.h>

/**
 * main - The Entry point
 * Description: This function demonstrates basic loop
 * Return: (0)
 */
int main(void)
{
	int i;

	i = 0;
	while (i > 10)
	{
		printf("%d", i % 2);
		i++;
	}
	return (0);
}
