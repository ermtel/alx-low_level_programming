#include "lists.h"

/**
 * free_dlistint - frees a dlist_t list.
 * @head: the head of the list.
 * Return: Void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
