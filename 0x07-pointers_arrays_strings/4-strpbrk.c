#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Function locates the first occurence in a string
 * of any of the bytes in another string.
 * @s: The search in string
 * @accept: The substring which contains accepted bytes.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such bytes is food.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
