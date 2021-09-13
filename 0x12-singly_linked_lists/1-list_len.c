#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the list structure.
 * Return: the number of elements of the list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++, h = h->next)
		;
	return (nodes);
}
