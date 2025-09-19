#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - Structure for a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);

#endif /* MAIN_H */
