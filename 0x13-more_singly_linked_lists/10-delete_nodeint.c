#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at @index of a linked list.
 * @head: the head of the linked list.
 * @index: the index of the node.
 * Return: 1 upon success or -1 upon failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;

	current = previous = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		for (; index != 0; index--)
		{
			previous = current;
			current = current->next;
			if (current == NULL)
			{
				free(current);
				return (-1);
			}
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
}
