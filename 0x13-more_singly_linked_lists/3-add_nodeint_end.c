#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a
 * linked list
 *
 * @head: pointer to the head of the list
 *
 * @n:constant  number used
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);

	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	else
		*head = new;
	return (new);
}
