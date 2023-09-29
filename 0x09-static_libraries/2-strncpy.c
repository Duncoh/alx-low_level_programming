#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - function that copies the string,
 * followed by a new line.
 * @dest: array name.
 * @src: elements of the array.
 * @n: number of bytes.
 *
 * Return: Array of characters.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
	_putchar('\n');
}
