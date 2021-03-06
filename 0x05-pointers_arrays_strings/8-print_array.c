#include "main.h"
#include <stdio.h>

/**
 * print_array - prints int arrays
 * @a: arrays passed to this param
 * @n: length of array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
}
