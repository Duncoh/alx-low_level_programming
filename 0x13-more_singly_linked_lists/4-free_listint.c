#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - a function that frees a listint_t list,
  * followed by a new line.
  *
  * @head: head of list to free.
  *
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;
	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
