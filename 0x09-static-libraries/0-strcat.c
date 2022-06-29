#include "main.h"

/**
 * _strcat - a function that concatenates
 * two strings together
 * @dest: char pointer destination
 * @src: char pointer source
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len;

	while (dest[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
