#include "main.h"

/**
 * _memset - writes value in b into n byte of s
 * @s: buffer string
 * @b: value to be written into buffer string
 * @n: amount of bytes it should be written to
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
