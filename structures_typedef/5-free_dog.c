#include <stdlib.h>
#include "main.h"

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

