#include "function_pointers.h"

/**
 * array_iterator - prints digits in array
 * @array: the arrrat to print
 * @size: size of array
 * @action: function pointer to executor
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int iterator;

	if (!array || !size || !action)
		return;
	iterator = 0;
	while (iterator < size)
	{
		action(array[iterator]);
		iterator++;
	}
}
