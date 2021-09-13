#include "lists.h"

/**
 * sum_listint - returns all the data of a listint_t linked list.
 * @head: the head of the linked list.
 * Return: the sum of all the data or 0 if empty.
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	for (sum = 0; temp != NULL; temp = temp->next)
		sum += temp->n;
	return (sum);
}
