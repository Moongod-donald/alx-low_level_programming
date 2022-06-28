#include "main.h"
#include "stdlib.h"

char *null_check(char *s);
/**
 * str_concat - function that concatenates two strings
 * @s1: destination
 * @s2: source
 *
 * Return: char.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = 0;
	char *concat;

	s1 = null_check(s1);
	s2 = null_check(s2);
	while (s1[len])
		len++;
	while (s2[i])
	{
		i++;
	}
	concat = malloc(sizeof(char) * (i + len + 1));
	if (concat == NULL)
		return (NULL);
	len = i = 0;
	while (s1[len])
	{
		concat[j] = s1[len];
		len++;
		j++;
	}
	while (s2[i])
	{
		concat[j] = s2[i];
		i++;
		j++;
	}
	return (concat);
}

/**
 * null_check - function tha checks if value passed is NULL
 * @s: string to check
 *
 * Return: char pointer.
 */
char *null_check(char *s)
{
	if (s == NULL)
		s = "";
	return (s);
}
