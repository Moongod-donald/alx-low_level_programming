#include <stdio.h>

/**
 * main - prints the first arg passed to it
 * @argc: counts the arrays (int)
 * @argv: poniter array to char pointer
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
