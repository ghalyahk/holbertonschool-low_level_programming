#include "main.h"
#include <stdlib.h>

/**
 * _str_len - returns the length of a string
 * @s: input string
 * Return: length of string
 */
int _str_len(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (s[i])
		i++;
	return (i);
}

/**
 * _str_cpy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_str_cpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog_t structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	len_name = _str_len(name);
	len_owner = _str_len(owner);

	dog->name = malloc(len_name + 1);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(len_owner + 1);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_str_cpy(dog->name, name);
	dog->age = age;
	_str_cpy(dog->owner, owner);

	return (dog);
}
