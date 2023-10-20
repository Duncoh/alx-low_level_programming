#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* add_node - a function that adds a new node
* at the beginning of a list_t list,
* followed by a new line.
*
* @head: first element.
* @str: string to be duplicated.
*
* Return: address of new element or NULL if fail
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	if (!(head))
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	if (str)
		new_head->str = strdup(str);
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
