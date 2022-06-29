#include "main.h"

/**
 * _strcmp - compares two strings together
 * @s1: char pointer that holds the first string
 * @s2: char pointer that holds the second string
 *
 * Return: int value: 0 if the strings are equal,
 * -15 if the first non-matching char is lower, and
 * 15 if the first non-matching char is higher
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
