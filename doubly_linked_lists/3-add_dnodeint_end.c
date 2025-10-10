#include "lists.h"

/**
<<<<<<< HEAD
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: Value to store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
=======
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: value to add to the new node
 *
 * Return: address of the new element, or NULL if it failed
>>>>>>> 22b772ea499ab7f846cb7848b0a1c2ae9241f3ae
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *temp;

<<<<<<< HEAD
    if (head == NULL)
        return (NULL);

=======
>>>>>>> 22b772ea499ab7f846cb7848b0a1c2ae9241f3ae
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;

    return (new_node);
}
