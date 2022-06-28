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

	while (str[len] != '\0')
	{
		len++;
	}

	if (len == 0)
	{
		return (NULL);
	}

	str1 = malloc(sizeof(char) * len);
	if (str1 != NULL)
	{
		for (i = 0; i < len; i++)
		{
			str1[i] = str[i];
		}
	}

	return (str1);
}
