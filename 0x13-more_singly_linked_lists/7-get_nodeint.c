#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the linked list.
 * @index: the index of the node.
 * Return: the nth node or NULL if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current = head;

	for (count = 0; current != NULL; count++, current = current->next)
		if (count == index)
			return (current);
	return (NULL);
}
