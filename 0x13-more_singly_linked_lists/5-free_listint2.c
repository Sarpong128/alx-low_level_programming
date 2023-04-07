#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: head of list.
 *
 * Return: return nothing (void).
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);
	}

	head = NULL;
}
