#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intergers
 * @min: minimum value of the range
 * @max: maximum value of the range
 *
 * Return: int.
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}

	return (array);
}
