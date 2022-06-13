#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: accepts a param that's a pointer to a char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;

	if ((len % 2) != 0)
	{
		len = i + 1;
		len = (len - 1) / 2;
	}
	else if ((len % 2) == 0)
	{
		len = len / 2;
	}

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');

}
