#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list_t list.
 * @head: the head of the list.
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head != NULL)
	{
		temp1 = *head;
		while (temp1 != NULL)
		{
			temp2 = temp1->next;
			free(temp1);
			temp1 = temp2;
		}
		*head = NULL;
	}
}
