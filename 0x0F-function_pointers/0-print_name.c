#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - program that prints a name
 * @name: name of the person
 * @f: function pointer
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(*f)(name);
}
