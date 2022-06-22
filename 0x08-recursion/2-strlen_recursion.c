#include "main.h"

/**
 * _strlen_recursion - a function that prints the lenth of a string
 * using recursion
 * @s: char pointer that points to the a char address
 *
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
		length++;

	if (*s == '\0')
		;
	else
		_strlen_recursion(s + 1);

	return (length);
}
