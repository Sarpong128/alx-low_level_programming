#include "lists.h"

/**
 * listint_len - conts the number of nodes in a linked list
 *
 * @h: head of the list
 *
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
