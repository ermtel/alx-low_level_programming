#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: the head of the linked list.
 * Return: the sum of all the data or 0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	for (sum = 0; temp != NULL; temp = temp->next)
		sum += temp->n;
	return (sum);
}
