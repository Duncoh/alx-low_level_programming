#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - a function that reverses
  * a listint_t linked list,
  * followed by a new line.
  *
  * @head: head of the list.
  *
  * Return: new first node of list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	if (!head || !(*head))
		return (NULL);

	prev = NULL;
	next = *head;

	while (next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
