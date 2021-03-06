#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem with malloc
 * @b: unsigned int b (size_t)
 *
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
