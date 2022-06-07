#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @c: argument that accepts the value
 *
 * Return: value or last digit of the variable c
 */
int print_last_digit(int c)
{
	int r;

	if (c >= 0)
		r = c % 10;
	else if (c < 0)
		r = (-c) % 10;
	if (r < 0)
		r = -r;

	_putchar(r + '0');

	return (r);
}
