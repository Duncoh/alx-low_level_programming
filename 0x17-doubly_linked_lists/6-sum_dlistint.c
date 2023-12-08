#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - a function that sums
* the data of a linked list,
* followed by a new line.
*
* @head: first element of linked list
* Return: 0 if empty, sum otherwise.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
