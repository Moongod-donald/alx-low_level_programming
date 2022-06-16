#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: accepts a char pointer to a string
 *
 * Return: char
 */
char *leet(char *c)
{
	int i = 0, j;
	char en[20]  = {'A', 'a', 'e', 'E', 'o', 'O', 't', 'T',
			'l', 'L', '4', '4', '3', '3', '0', '0', '7', '7',
			'1', '1'};

	while (c[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == en[j])
			{
				c[i] = en[j + 10];
			}
		}
		i++;
	}
	return (c);
}
