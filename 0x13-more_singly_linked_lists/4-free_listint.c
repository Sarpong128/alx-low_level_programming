#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: head of the linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem);
	}
}
