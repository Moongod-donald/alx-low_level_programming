#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: counts the arrays
 * @argv: array of arguments passed
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	while (argc >= 1)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	return (0);
}
