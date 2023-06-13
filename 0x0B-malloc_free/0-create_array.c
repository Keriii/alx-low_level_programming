#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of characters
 * @size: size of char
 * @c: the char
 * Return: NULL if it fails or if size = 0, or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int b;

	if (size == 0)
	return (NULL);
a = malloc(sizeof(c) * size);

if (a == NULL)
	return (NULL);

for (b = 0; b < size; b++)
	a[b] = c;

return (a);
}
