#include "mian.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: intiger
 *
 * Return: 1 if n>0  if n=0 and -1 if n<0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n > 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}