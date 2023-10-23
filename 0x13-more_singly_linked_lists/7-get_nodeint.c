#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - a function that returns the nth node
  * of a listint_t linked list,
  * followed by a new line.
  *
  * @head: head of list
  * @index: the index to return node starting at 0.
  *
  * Return: node, if it does not exist, NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index && head; i++)
		head = head->next;
	if (i == index)
		return (head);
	return (NULL);
}
