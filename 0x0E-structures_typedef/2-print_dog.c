#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *d)
{
        if (d == NULL)
        {
		printf("Name; (nil)\n");
		printf("Owner: (nil)\n");
                printf("Age: (nil)\n");
		
	}
	else
	{
		printf("Name: %s\n", d->name);
                printf("Age: %f\n", d->age);
                printf("Owner: %s\n", d->owner);
        }
}

