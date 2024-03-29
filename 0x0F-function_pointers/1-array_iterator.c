#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: array
 * @size: size of the array
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;

	if (array && action)
		for  (a = 0; a < size; a++)
			action(array[a]);
}
