#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

/**
 * _strdup - duplicates a string without using strlen
 * @str: string to duplicate
 * Return: pointer to new string, or NULL if fails
 */
char *_strdup(char *str)
{
    char *copy;
    int len = 0, i;

    if (str == NULL)
        return NULL;

    /* حساب الطول */
    while (str[len])
        len++;

    copy = malloc(len + 1);
    if (copy == NULL)
        return NULL;

    /* نسخ المحتوى */
    for (i = 0; i <= len; i++)
        copy[i] = str[i];

    return copy;
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;

    if (name == NULL || owner == NULL)
        return NULL;

    dog = malloc(sizeof(dog_t));
    if (!dog)
        return NULL;

    dog->name = _strdup(name);
    if (!dog->name)
    {
        free(dog);
        return NULL;
    }

    dog->owner = _strdup(owner);
    if (!dog->owner)
    {
        free(dog->name);
        free(dog);
        return NULL;
    }

    dog->age = age;

    return dog;
}
