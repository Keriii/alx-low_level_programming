#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returnes a pointer to a newly allocated space
 * @str: duplicate of string
 *
 * Return: NULL if str is NULL or insufficient memory, or pointer
 */
char *_strdup(char *str)
{

	char *a;
	unsigned int b, c;

	if (str == NULL)
		return (NULL);

	for (b = 0; str[b] != '\0'; b++)
		;
	a = (char *)malloc(sizeof(char) * (b + 1));

	if (a == NULL)
		return (NULL);

	for (c = 0; c <= b; c++)
		a[c] = str[c];

	return (a);
}
