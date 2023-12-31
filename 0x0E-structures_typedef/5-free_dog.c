#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs,
 * followed by a new line.
 *
 * @d: the structure to free
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
