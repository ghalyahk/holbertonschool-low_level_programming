#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n)
 * @head: pointer to head
 *
 * Return: sum, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

