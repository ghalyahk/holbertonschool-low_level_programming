#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a dlistint_t list
 * @head: head of the list
 *
 * Return: sum of all n, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}

