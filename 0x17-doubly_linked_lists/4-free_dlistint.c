#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_dlistint - a function that does free a linked list,
* followed by a new line.
*
* @head: first member of list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
