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
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-15);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
