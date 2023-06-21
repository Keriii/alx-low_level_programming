#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: a pointer to the function
 * Return: no element matches,eturn -1 If size <= 0, return -1 or 0 for nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
	if (size <= 0)
	{
		return (0);
	}
	if (size > 0)
	{
		for (a = 0 ; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	}

return (-1);
	}
