#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * *s: initial segment
 * *accept: consist only bytes
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	for (a = 0; *(s + a) != '\0'; a++)
	{ 
		c = 1;
		for ( b =0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + j))
			{
				c = 0;
				break;
			}
		}
		if (c == 1)
			break;
	}
	return (a);
}
