#include "main.h"

/**
 * print_times_table - prints the time table of any value given
 * @n: receives input from it's call
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (!(n > 15) || (n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					if (j == n)
						_putchar('0' + j);
					else
					{
						_putchar('0' + j);
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if ((k < 10) && (j != 0))
				{
					if (j == n)
						_putchar('0' + k);
					else
					{
						_putchar('0' + k);
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if ((k < 100) && (k >= 10))
				{
					if (j == n)
					{
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
					else
					{
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if ((k >= 100) && (k < 1000))
				{
					if (j == n)
					{
						_putchar(( k / 100) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar((k % 10) + '0');
					}
					else
					{
						_putchar((k / 100) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar((k % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
