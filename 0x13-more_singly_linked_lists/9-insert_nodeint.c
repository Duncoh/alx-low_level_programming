#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - a function that inserts
  * a new node at a given position,
  * followed by a new line.
  *
  * @head: head of list.
  * @idx: index to add node.
  * @n: data for node.
  *
  * Return: address of new node or NULL if fail
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *next;
	listint_t *prev;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	next = *head;

	for (i = 0; i < idx && next; i++)
	{
		prev = next;
		next = next->next;
	}

	if (i == idx)
	{
		new_node->n = n;
		new_node->next = next;
		if (i != 0)
			prev->next = new_node;
		else
			*head = new_node;
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}
