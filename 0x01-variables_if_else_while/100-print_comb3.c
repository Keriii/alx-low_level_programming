#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			if (a != b && a < b)
			{
			putchar(48 + a);
			putchar(48 + b);
			
			if (a + b)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	b++;
}
putchar('\n');
return (0);
}
