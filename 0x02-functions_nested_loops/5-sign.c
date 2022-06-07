#include "main.h"

/**
 * print_sign - checks if value passed in is greater than, less than or zero
 * @n: int argument passed to make the comparison
 *
 * Return: 1 (if n is greater than zero), 0 (if n is zero), -1 (if less than 0)
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}

	return (r);
}
