#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer
 * @src: string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog_t, or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog->name = malloc(len1 + 1);
	dog->owner = malloc(len2 + 1);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

