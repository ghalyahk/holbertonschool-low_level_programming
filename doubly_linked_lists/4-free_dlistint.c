#include "lists.h"

/**
<<<<<<< HEAD
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
=======
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: void
>>>>>>> 22b772ea499ab7f846cb7848b0a1c2ae9241f3ae
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head != NULL)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
