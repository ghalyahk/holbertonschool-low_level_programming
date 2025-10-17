#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
