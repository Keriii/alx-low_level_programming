#include "main.h"

/**
 * _memset - a function that filles the first n bytes of memory area pointed by s with the cinstant byte b
 * @s: memort area
 * @n: bytes to be fiulled
 * @b: constant bytes
 * Return: the pointer s
 */
char *_memset(char *s, char *b, unsigned int *n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s +i) + b;

	return (s);
}
