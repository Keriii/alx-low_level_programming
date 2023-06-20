#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dog
 * @d: struct
 *
 * Return: 0(Success)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
