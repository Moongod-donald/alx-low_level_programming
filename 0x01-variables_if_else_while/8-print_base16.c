#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int num = 48;
	char alpha = 'a';

	while (num <= 57)
		putchar(num++);
	while (alpha <= 'f')
		putchar(alpha++);
	putchar('\n');

	return (0);
}
