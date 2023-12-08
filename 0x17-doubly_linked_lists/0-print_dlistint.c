#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - a function that prints all
* the elements of a dlistint_t list,
* followed by a new line.
*
* @h: pointer to the start of the linked list
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
