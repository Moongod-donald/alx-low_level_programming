#include "main.h"

/**
 * _abs - coverts value to absolute
 * @c: accepts value and uses it to do the conversion
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	int r;

	if (c < 0)
		r = (-c);
	else
		r = (c);

	return (r);
}
