#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
