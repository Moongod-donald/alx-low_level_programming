#include "main.h"

/**
 * print_most_numbers - a function that prints most numbers
 *
 * Return: void (success)
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if ((num == 50) || (num == 52))
		{
			continue;
		}
		else
			_putchar(num);
	}
	_putchar('\n');
}
