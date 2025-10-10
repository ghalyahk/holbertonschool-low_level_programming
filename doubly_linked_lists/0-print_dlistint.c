#include "lists.h"
<<<<<<< HEAD

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
=======
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
>>>>>>> 22b772ea499ab7f846cb7848b0a1c2ae9241f3ae
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
<<<<<<< HEAD

=======
>>>>>>> 22b772ea499ab7f846cb7848b0a1c2ae9241f3ae
    return (count);
}
