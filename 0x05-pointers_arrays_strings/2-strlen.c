#include "main.h"

/**
 * _strlen - returns the length of astring
 * @s: integer
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;
	return (a);
}
