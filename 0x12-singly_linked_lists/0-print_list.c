#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list.
 * @h: the list structure.
 * Return: the number of nodes of the list.
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (nodes);
}
