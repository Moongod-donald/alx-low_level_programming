#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that allocates memory to string
 * @str: the string
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *str1;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	str1 = malloc(sizeof(char) * (len + 1));

	if (str1 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		str1[i] = str[i];
	}
	return (str1);
}
