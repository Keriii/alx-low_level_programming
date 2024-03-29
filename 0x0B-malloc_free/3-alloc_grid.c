#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL on faliure, or when widthor height is 0
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;

	return (a);
}
