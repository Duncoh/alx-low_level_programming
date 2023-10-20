#include <stdio.h>
#include "lists.h"

/**
* free_list - a function that frees a list_t list,
* followed by a new line.
*
* @head: the head of the list to free
* Return: void
*/

void free_list(list_t *head)
{
	if (!head)
		return;
	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
