#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @*s: string
 * @c: character
 * @NULL: zero
 * Return: the first occurance
 */
char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; *(s + a) != '\0'; a++)
		if (*(s +a) == c)
			return (s + a);
	return ('\0');
}
