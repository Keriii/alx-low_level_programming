#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int a;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

a = n % 10;
if (n % 10 < 6 && n % 10 != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
}
else
{
	if (n % 10 == 0)
	{
	printf("Last digit of %d is %d and is 0", n, a);
	}
	else
	{
	printf("Last digit of %d is %d and is greater than 5", n, a);
	}
}
printf("\n");
return (0);
}
