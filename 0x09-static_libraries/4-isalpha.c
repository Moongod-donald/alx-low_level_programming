#include "main.h"

/**
 * _isalpha - checks if char is a letter, lowercase or uppercase
 * @c: accepts an integer value
 *
 * Return: 1 (if value is a letter), 0 (if otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
