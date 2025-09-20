#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - makes a copy of a string using malloc
 * @str: string to copy
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
    char *copy;
    int i = 0, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len] != '\0')
        len++;

    copy = malloc(sizeof(char) * (len + 1));
    if (copy == NULL)
        return (NULL);

    while (i < len)
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';

    return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * Return: pointer to new dog_t struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    d->name = _strdup(name);
    if (d->name == NULL)
    {
        free(d);
        return (NULL);
    }

    d->owner = _strdup(owner);
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return (NULL);
    }

    d->age = age;

    return (d);
}
