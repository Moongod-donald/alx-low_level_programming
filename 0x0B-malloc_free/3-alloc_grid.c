#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a 2 dimen array of int
 * @width: width of the array
 * @height: hwight of the array
 *
 * Return: int.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **dimen;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	dimen = (int **) malloc(sizeof(int) * height);

	if (dimen == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		dimen[i] = (int *) malloc(sizeof(int) * width);
		if (dimen[i] == NULL)
		{
			free(dimen);
			for (j = 0; j <= i; j++)
				free(dimen[j]);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			dimen[i][j] = 0;
		}
	}
	return (dimen);
}
