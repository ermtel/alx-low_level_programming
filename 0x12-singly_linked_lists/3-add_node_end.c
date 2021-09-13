#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the pointer to the head of the linked list.
 * @str: the string to be added.
 * Return: the address of the new element or NULL upon failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	return (temp);
}
