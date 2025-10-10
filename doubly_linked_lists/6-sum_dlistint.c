#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a dlistint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all n, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

