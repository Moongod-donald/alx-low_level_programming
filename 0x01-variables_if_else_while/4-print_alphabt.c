#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet == 'q') || (alphabet == 'e'))
			continue;
		putchar(alphabet++);
	}
	putchar('\n');

	return (0);
}