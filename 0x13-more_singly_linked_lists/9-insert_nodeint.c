#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head of the linked list.
 * @idx: the index of the list.
 * @n: data to be added.
 * Return: the address of the new node or NULL upon failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1, *temp2;

	temp1 = *head;
	temp2 = malloc(sizeof(listint_t));
	if (temp2 == NULL)
	{
		free(temp2);
		return (NULL);
	}
	temp2->n = n;
	if (idx == 0)
	{
		temp2->next = *head;
		*head = temp2;
		return (temp2);
	}
	for ( ; idx > 1; idx--, temp1 = temp1->next)
	{
		if (temp1 == NULL)
		{
			free(temp1);
			return (NULL);
		}
	}
	temp2->next = temp1->next;
	temp1->next = temp2;
	return (temp2);
}
