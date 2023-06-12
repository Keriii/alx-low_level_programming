#include "main.h"

/**
 * _isalpha - identifies alphabets
 * @c: intiger
 *
 * Return: 1 is c is a letter or 0 if not
 */
int _isalpha(int c)
{
	if (c <= 65 && c >= 90) || if (c <= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
