#include "main.h"

/**
 * _strlen - check the length of a string
 * @s: pointer that accepts the address of first array
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
	{
		len += 1;
	}
	return (len);
}
