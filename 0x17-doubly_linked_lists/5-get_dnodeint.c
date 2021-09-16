#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the linked list.
 * @index: the index of the node.
 * Return: the nth node or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current = head;

	for (count = 0; current != NULL; count++, current = current->next)
		if (count == index)
			return (current);
	return (NULL);
}
