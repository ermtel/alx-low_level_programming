#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: the head of the linked list.
 * Return: the head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int hdata;

	if (*head == NULL)
		return (0);
	temp = *head;
	hdata = temp->n;
	*head = temp->next;
	free(temp);
	return (hdata);
}
