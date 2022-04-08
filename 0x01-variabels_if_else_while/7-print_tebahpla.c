#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print lowercase alphabet backwards
 * Return: 0
 */
int main(void)
{
	for (c = 'z'; c>= 'a'; --c)
		putchar(c);

	putchar('\n');

	return (0);
}
