#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: first string that checks
 * @accept: string used in checking
 *
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return ('\0');
}
