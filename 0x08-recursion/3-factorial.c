#include "main.h"

/**
 * factorial - function that calculates the factorial of numbers
 * @n: n!
 *
 * Return: -1 and 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return(n = n * factorial(n - 1));
}
