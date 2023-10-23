#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees a listint_t list,
  * followed by a new line.
  *
  * @head: head of list
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	if (!(*head))
		return;

	while ((*head)->next)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
