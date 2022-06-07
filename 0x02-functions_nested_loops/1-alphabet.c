#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 **/
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha <= 122)
		_putchar(alpha++);
	_putchar('\n');
}
