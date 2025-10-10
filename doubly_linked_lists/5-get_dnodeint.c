#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to head
 * @index: index starting at 0
 *
 * Return: pointer to node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}

	return (NULL);
}

