#include "main.h"
#include <stdio.h>

/**
 * _strstr - Finds the first occurrence a substring appears in a string.
 * @haystack: the string to look for.
 * @needle: The required substring.
 *
 * Return: a NULL value if the substring is not discovered or a pointer to the substring's beginning.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
