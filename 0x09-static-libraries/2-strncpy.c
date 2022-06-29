#include "main.h"

/**
 * _strncpy - copies a string to another variable
 * @dest: char pointer that will hold the string
 * @src: char pointer that holds the string
 * @n: amount in bytes to be copied
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
