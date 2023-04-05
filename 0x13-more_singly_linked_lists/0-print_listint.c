#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t nodes = 0;

	while (cursor != NULL)
	{
		print("%d\n", cursor->n);
		nodes += 1;
		cursor = cursor->next;
	}
	return (nodes);
}
