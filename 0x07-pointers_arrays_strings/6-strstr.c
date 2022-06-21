#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: holds the string that will be checked
 * @needle: the substring
 *
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, w;

	while (needle[i] != '\0')
	{
		for (j = 0; haystack[i] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				for (w = 0; #include "main.h"
#include <stdio.h>

/**
 * *_strspn - gets length of a prefix substring
 * @s: string to be searched
 * @accept: string containing value to be searched
 *
 * Return: returns number of bytes in intial segment
 */
					     unsigned int _strspn(char *s, char *accept)
					{
						int a, b, c, value;

						c = 0;

						for (a = 0 ; s[a] != '\0'; a++)
						{
							value = 0;
							for (b = 0; accept[b] != '\0'; b++)
							{
								if (s[a] == accept[b])
								{
									c++;
									value = 1;
								}
							}
							if (value == 0)
							{
								return (c);
							}
						}

						return (0);
					}#include "main.h"
#include <stdio.h>

/**
 * *_strspn - gets length of a prefix substring
 * @s: string to be searched
 * @accept: string containing value to be searched
 *
 * Return: returns number of bytes in intial segment
 */
					     unsigned int _strspn(char *s, char *accept)
					{
						int a, b, c, value;

						c = 0;

						for (a = 0 ; s[a] != '\0'; a++)
						{
							value = 0;
							for (b = 0; accept[b] != '\0'; b++)
							{
								if (s[a] == accept[b])
								{
									c++;
									value = 1;
								}
							}
							if (value == 0)
							{
								return (c);
							}
						}

						return (0);
					}
			}
		}
	}
}
