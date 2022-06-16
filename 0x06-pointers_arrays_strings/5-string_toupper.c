#include "main.h"

/**
 * string_toupper - coverts lowercase to uppercase
 * @c: char pointer of string
 *
 * Return: char
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ((c[i] >= 97) && (c[i] <= 122))
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}
