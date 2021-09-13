#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list_t list.
 * @head: the head of the list.
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
