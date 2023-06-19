#include <stdio.h>

/**
 * main - a function that prints the namr of the file it is compiled from
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
