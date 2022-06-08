#include <stdio.h>

/**
 * main - prints the sum of all even fibonacci nums
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int j, k, next, sum = 0;

	j = 1;
	k = 2;

	for (i = 1; i < 34; i++)
	{
		if ((j < 4000000) && (j % 2 == 0))
		{
			sum += j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
