#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: input parameter
 * Return: 0 (Sucess)
 */
void print_rev(char *s)
{
	int a = 0;

	while (a >= 0)
	{
		if (s[a] == '\0')
			break;
		a++;
	}
	for (a-- ; a >= 0 ; a--)
		_putchar(s[a]);
	_putchar('\n');
}
