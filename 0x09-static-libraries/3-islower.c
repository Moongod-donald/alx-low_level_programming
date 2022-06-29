#include "main.h"

/**
 * _islower - checks if the code is lower
 * @c: accepts an int value
 *
 * Return: return 1 (Success), return 0 (Error)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
