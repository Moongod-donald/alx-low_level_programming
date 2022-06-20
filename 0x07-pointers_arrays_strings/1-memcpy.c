#include "main.h"

/**
 * _memcpy - copy n bytes from src into dest
 * @dest: destination of the string to be copied
 * @src: source of the string
 * @n: amount in bytes to be copies fro src
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
