#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints numbers 0 to 0 in one line
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
		putchar('0' + i);

	putchar('\n');

	return (0);
}

