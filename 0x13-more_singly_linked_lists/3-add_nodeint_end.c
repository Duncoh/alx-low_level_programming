#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - a function that adds a new node
  * at the end of a listint_t list,
  * followed by a new line.
  *
  * @head: first node of list.
  * @n: integer.
  *
  * Return: address of new element or NULL if failed.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *copy;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!head)
		return (NULL);

	if (*head)
	{
		copy = *head;
		while (copy->next)
		{
			copy = copy->next;
		}
		copy->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
