#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the pointer to the head of the linked list.
 * @str: the string to be added.
 * Return: the address of the new element of NULL upon failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
