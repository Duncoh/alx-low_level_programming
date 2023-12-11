#include "main.h"
/**
 * _memcpy - a function that copies n bytes
 * from memory area,
 * followed by a new line.
 *
 * @src: is the memory area to copy from
 * @dest: is the memory area to copy to
 * @n: number of bytes
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
