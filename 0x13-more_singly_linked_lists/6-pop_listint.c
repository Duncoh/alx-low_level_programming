#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - a function that deletes the head node
  * of a listint_t linked list,
  * and returns the head node’s data (n),
  * followed by a new line.
  *
  * @head: head of linked list.
  *
  * Return: int value of head
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !(*head))
		return (0);
	temp = *head;
	n = (*head)->n;
	if (temp->next)
		*head = temp->next;
	else
		*head = NULL;
	free(temp);
	return (n);
}
