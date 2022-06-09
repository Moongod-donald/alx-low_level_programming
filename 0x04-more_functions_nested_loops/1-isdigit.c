#include "main.h"

/**
 * _isdigit - check if value is digit
 * @c: parameter used in checking
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 47 && c <= 57)
		return (1);
	else
		return (0);
}
