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
	char string[100];

	for (i = 0; str[i]; i++)
	{
		string[i] = str[i];
	}
	string[i] = '\0';

	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
}
