#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count the arguments
 * @argv: stores the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	unsigned int mul;

	if ((argc - 1) == 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
