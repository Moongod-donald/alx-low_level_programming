#include "main.h"

/**
 * _puts - prints out a string
 * @str: accepts a string param
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
