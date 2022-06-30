#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a memory
 * @nmemb: the bytes to store
 * @size: size data type
 *
 * Return: void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	array = malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
		array[i] = 0;
	return (array);
}
