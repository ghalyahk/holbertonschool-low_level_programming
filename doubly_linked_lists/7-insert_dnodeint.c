#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node;
    dlistint_t *temp = *h;
    unsigned int i;

    if (!h)
        return (NULL);

    if (idx == 0)
        return (add_dnodeint(h, n));

    for (i = 0; temp && i < idx - 1; i++)
        temp = temp->next;

    if (!temp)
        return (NULL);

    if (!temp->next)
        return (add_dnodeint_end(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next->prev = new_node;
    temp->next = new_node;

    return (new_node);
}

