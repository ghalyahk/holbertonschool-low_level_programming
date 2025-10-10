#ifndef LISTS_H
#define LISTS_H

<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> 22b772ea499ab7f846cb7848b0a1c2ae9241f3ae
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
<<<<<<< HEAD
 * for Holberton project
=======
>>>>>>> 22b772ea499ab7f846cb7848b0a1c2ae9241f3ae
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

<<<<<<< HEAD
/* Function prototypes */
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
=======
void free_dlistint(dlistint_t *head);
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
>>>>>>> 22b772ea499ab7f846cb7848b0a1c2ae9241f3ae

#endif /* LISTS_H */
