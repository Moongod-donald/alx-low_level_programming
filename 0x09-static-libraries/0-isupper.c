#include "main.h"

/**
 * _isupper - checks if alphabet or char
 * is either in lowercase or uppercase
 * @c: accepts parameter c is arg
 * Return: 0 if lowercase and 1 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
