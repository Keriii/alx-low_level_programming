#include <stdio.h>
/**
 * main - entry point
 * Description: Prints all singel digit number to the base 10
 * return: 0
 */
int main(void)
{
	int c = 0;
	
	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
