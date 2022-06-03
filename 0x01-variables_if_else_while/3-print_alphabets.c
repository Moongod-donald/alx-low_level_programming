#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char uppercase = 'A';
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase++);
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase++);
	}
	putchar('\n');

	return (0);
}
