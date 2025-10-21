#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    if (ht == NULL)
        return (EXIT_FAILURE);

    printf("%p\n", (void *)ht);

    /* Free allocated memory to avoid valgrind leaks */
    free(ht->array);
    free(ht);

    return (EXIT_SUCCESS);
}

