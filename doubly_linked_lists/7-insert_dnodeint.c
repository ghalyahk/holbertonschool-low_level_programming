#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to head
 * @idx: index starting at 0
 * @n: value of node
 *
 * Return: address of new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;

	if (!current)
		return (NULL);

	if (!current->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;

	return (new);
}

