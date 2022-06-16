#include "main.h"
#include <stdio.h>

/**
 * rev_array - reverses the int array
 * @a: an array of integers
 * @n: the number of elemenrs to reverse
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int j, i, tmp;

	j = n - 1;

	for (i = 0; i < n/2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
