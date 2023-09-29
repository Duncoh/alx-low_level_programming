#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest, followed by a new line.
 * @dest: array name.
 * @src: elements of the array.
 *
 * Return: Always 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
	_putchar('\n');
}
