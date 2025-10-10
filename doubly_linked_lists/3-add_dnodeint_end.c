#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to head
 * @n: value of new node
 *
 * Return: address of new node, or NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next)
		current = current->next;

	current->next = new;
	new->prev = current;

	return (new);
}

