#include "main.h"

/**
 * _memcpy - a function that copies n bytes from memoty area src to memory area dest
 * @src: source memory area
 * @n: bytes to be filled
 * @dest: destination memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);

	return (dest);
}
