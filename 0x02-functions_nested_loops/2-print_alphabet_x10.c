#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase in ten lines
 *
 * Return: void
 **/
void print_alphabet_x10(void)
{
	int i = 0;
	int alpha = 97;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
 		}
		_putchar('\n');
      	}
}
