#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * *str: input parameter
 * Return: 0 (Success)
 */
void _puts(char *str)
{
	int a = 0;

	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[a]);
		a++;
	}
}
