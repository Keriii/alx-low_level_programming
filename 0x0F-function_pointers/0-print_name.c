#include "function_pointers.h"

/**
 * print_name - a function that prints names
 * @name: name string
 * @f: function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
