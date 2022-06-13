#include "main.h"

/**
 * swap_int - swaps two int for eachother
 * @a: first int param
 * @b: second int param
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
