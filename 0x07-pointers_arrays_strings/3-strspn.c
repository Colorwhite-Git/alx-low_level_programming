#include "main.h"
#include <stdio.h>

/**
 * _strspn - It gets the length of a prefix substring.
 * @s: This reference is a string to check.
 * @accept: Substring that contains accepted bytes.
 *
 * Return: Number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		if (!accept[j])
			break;
	}

	return (length);
}
