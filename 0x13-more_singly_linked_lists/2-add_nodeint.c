#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - a function that adds a new node
  * at the beginning of a listint_t list,
  * followed by anew line.
  *
  * @head: the first element of list.
  * @n: integer.
  *
  * Return: address of new element or NULL if failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!head)
		return (NULL);

	if (head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
