#include "main.h"


/**
 * print_rev - prints the reverse of a string
 * @s: accepts a point to a char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;
	char string[100];

	for (i = 0; s[i]; i++)
	{
		string[i] = s[i];
	}


	for (j = i; j >= 0; j--)
	{
		_putchar(string[j]);
	}
	_putchar('\n');
}
