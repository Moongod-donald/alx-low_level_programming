#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: destination strings
 * @s2: source string to be copied
 * @n: bytes to allocate
 *
 * Return: char.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int length, length2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s2[i] != '\0')
	{
		i++;
	}
	while (s1[j] != '\0')
	{
		j++;
	}
	str = malloc(sizeof(char) * (i * j));
	length = i;
	length2 = j;
	if (str == NULL)
		return (NULL);
	for (i = 0; i < length2; i++)
	{
		str[i] = s1[i];
	}
	if (n >= length)
	{
		n = length;
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
