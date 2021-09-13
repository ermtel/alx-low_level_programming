#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: the head of the list.
 * Return: Void.
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
