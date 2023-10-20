#include <stdio.h>
#include "lists.h"

/**
* list_len - a function that returns the number of
* elements in a linked list_t list,
* followed by a new line.
*
* @h: linked list
* Return: number of elements.
*/

size_t list_len(const list_t *h)
{
	if (h && h->next)
	return (1 + list_len(h->next));
	else if (h)
		return (1);
	return (0);
}
