#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int i, j;

	i = 48;
	j = 49;
	while (i <= 56)
	{
		while (j <= 57)
		{
			if (!(j <= i))
			{
				putchar(i);
				putchar(j);
				if ((i != 56) && (j != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
