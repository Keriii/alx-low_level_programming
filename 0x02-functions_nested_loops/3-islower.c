#include "main.h"

/**
 * _islower - checks is the character is lower case or not
 *
 * Return: 1 if c is lower or 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
