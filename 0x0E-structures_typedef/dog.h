#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  a structure
 * @name: mane of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * dog_t - new name for struc
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
