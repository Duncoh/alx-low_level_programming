#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - a function that returns the sum of all
  * the data (n) of a listint_t linked list,
  * followed by a new line.
  *
  * @head: head of list.
  *
  * Return: sum of all data in list, 0 if empty list
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
