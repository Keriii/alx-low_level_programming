#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer of an array of chars, or NULLon faliure
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int b, c, d, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b] != '\0'; b++)
		;

	for (c = 0; s2[c] != '\0'; c++)
		;

	a = malloc(sizeof(char) * (b + c + 1));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (d = 0; d < b; d++)
		a[d] = s1[d];

	z = c;
	for (c = 0; c <= z; d++, c++)
		a[d] = s2[c];

	return (a);
}
