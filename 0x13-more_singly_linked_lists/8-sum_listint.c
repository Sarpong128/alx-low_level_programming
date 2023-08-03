#include "lists.h"

/**
 * sum_listint - sume of all the data (n) of a linked list
 * @head: in the begining of linked list
 * Return: sum of all the data (n) values
 */
int sum_listint(listint_t *head)
{
	int add;

	for (add = 0; head; head = (*head).next)
		add += (*head).n;

	return (add);
}
