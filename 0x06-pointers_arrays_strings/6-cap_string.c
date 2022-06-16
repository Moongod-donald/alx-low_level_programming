#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @c: char pointer that accepts string
 *
 * Return: char
 */
char *cap_string(char *c)
{
	int i = 0, j = 0;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
			'"', '(', ')', '{', '}'};

	while (c[i] != '\0')
	{
		if (i == 0 && c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (c[i] == sep[j])
			{
				if ((c[i + 1] >= 'a') && (c[i + 1] <= 'z'))
				{
					c[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (c);
}
