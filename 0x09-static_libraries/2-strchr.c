#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strchr - a function that locates a character in a string,
 * followed by a new line.
 *
 * @c: is the character
 * @s: is the string
 *
 * Return: a pointer to the first occurence of the character @c
 * in the string @s. Return  NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
