#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a != 9)
		{
		putchar(48 + a", ");
		}
		else
		{
			putchar(48 + a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
