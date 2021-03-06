#include "function_pointers.h"

/**
 * int_index - print the index value of an int
 * @array: the array of int to loop
 * @size: the sizeof int
 * @cmp: function array to some functions in a source code
 *
 * Return: value of index at int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
