#include "lists.h"

/**
 * pop_listint - deletes the head node
 * of a linked list
 *
 * @head: head of a list
 *
 * Return: head of node's data or
 * 0 when linked list is empty
 */

int  pop_listint(listint_t **head)
{
	int head_node;
	listint_t *temp;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;

	head_node = temp->n;

	free(temp);

	return (head_node);
}
