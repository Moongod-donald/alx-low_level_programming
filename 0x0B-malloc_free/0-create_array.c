#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: array
 *
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str != NULL)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}

	return (str);
}
