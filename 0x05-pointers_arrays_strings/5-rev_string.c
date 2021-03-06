#include "main.h"

/**
 * rev_string - reverses a string
 * @s: accepts a string using a pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0, len;
	char str[500];

	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	len = i;

	while (j <= len - 1)
	{
		s[j] = str[i - 1];
		j++;
		i--;
	}
}
