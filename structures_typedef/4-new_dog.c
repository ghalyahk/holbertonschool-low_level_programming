#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog_t struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * 
 * Return: pointer to new dog_t struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;
	size_t name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_len = strlen(name);
	owner_len = strlen(owner);

	name_copy = malloc(name_len + 1);
	owner_copy = malloc(owner_len + 1);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(dog);
		return (NULL);
	}

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
