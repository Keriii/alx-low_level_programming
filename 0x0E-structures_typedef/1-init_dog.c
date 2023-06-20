#include "dog.h"

/**
 * init_dog - a function that initializes a variable
 * @name: character
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: struct
 *
 * Return: 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name =name;
		d->age = age;
		d->owner = owner;
	}
}
