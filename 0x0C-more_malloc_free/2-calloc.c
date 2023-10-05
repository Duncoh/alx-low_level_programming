#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* _calloc - a function that allocates memory for an array
* using malloc,
* followed by a new line.
*
* @nmemb: elements of the array.
* @size: Bytes of each element fo the array.
*
* Return: a pointer with the memory location of the array.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return ((void *)ptr);
}
