#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - a function that prints all
* the elements of a listint_t list,
* followed by a new line.
*
* @h: list to print elements.
* Return: the number of nodes.
*
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
