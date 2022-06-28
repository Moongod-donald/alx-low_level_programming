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

	str1 = malloc(sizeof(char) * len + 1);

	if (str1 != NULL)
	{
		for (i = 0; i < len; i++)
		{
			str1[i] = str[i];
		}
	}
	else
		return (NULL);

	return (str1);
}
