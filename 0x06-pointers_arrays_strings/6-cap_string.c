#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @c: char pointer that accepts string
 *
 * Return: char
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ((c[i] == ' ') || (c[i] == '\t') || (c[i] == '\n')
		    || (c[i] == ',') || (c[i] == ';') || (c[i] == '.')
		    || (c[i] == '!') || (c[i] == '?') || (c[i] == '"')
		    || (c[i] == '(') || (c[i] == ')') || (c[i] == '{')
		    || (c[i] == '}'))
		{
			if ((c[i + 1] >= 97) && (c[i + 1] <= 122))
			{
				c[i + 1] -= 32;
			}
		}
		i++;
	}
	return (c);
}
