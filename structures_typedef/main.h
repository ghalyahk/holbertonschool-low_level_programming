#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);

#endif /* MAIN_H */
