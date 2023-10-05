#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory using malloc,
* followed by a new line.
*
* @b: size to allocate memory.
* main - check the code
*
* Return: a pointer with the memory location.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
