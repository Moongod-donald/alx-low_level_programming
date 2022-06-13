#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: accepts a point to a char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, j, len;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
