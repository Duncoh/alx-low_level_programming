#include "main.h"
/**
 * _memset - function that fills n bytes of the
 * memory with a constant byte,
 * followed by a new line.
 *
 * @s: a pointer to memory area
 * @n: the number of bytes.
 * @b: constant byte
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
