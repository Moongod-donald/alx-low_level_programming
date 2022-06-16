#include "main.h"

/**
 * rot13 - encoded a string using rot13
 * @c: pointer char that holds the string
 *
 * Return: char
 */
char *rot13(char *c)
{
	int i = 0, j;
	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWSYZabcdefghijklmnopqrstuvwxyz";
	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
				break;
			}
		}
		i++;
	}
	return (c);
}
