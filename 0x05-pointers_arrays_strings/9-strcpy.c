#include "main.h"

/**
 * _strcpy - copies a string to a char pointer
 * @dest: destination of the copied string
 * @src: source of the string
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
