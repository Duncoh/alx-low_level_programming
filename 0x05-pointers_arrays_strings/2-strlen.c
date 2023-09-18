#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @p: Variable string.
 *
 *Return: Always void.
 */
int _strlen(char *p)
{
	int n = 0;

	while (*p != '\0')
	{
		n++;
		p++;
	}
	return (n);
}
