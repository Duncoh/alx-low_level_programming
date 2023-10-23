#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list,
 * followed by a new line.
 *
 * @h: the list to check
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
