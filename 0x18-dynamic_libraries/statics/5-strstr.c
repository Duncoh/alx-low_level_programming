#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring,
 * followed by a new line.
 * @haystack: is the string.
 * @needle: is the substring.
 *
 * Return: pointer to beginning of needle in @haystack or
 * NULL if no substring is found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
