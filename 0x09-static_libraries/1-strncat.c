#include "main.h"

/**
 * _strncat - concatenates two strings together
 * using bytes as a determiner
 * @dest: destination of the string
 * @src: source of the string
 * @n: amount of bytes to be added
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len, len0;

	while (dest[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	len0 = i;
	i = 0;

	if (n > len0)
	{
		n = len0;
	}

	while (i < n)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
