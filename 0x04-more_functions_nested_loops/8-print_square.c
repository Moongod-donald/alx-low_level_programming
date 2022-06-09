#include "main.h"

/**
 * print_square - prints a square
 * @size: accepts an interger value to print '#'
 * Return: Alway 0 (success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
