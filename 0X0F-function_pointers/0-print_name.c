#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: pointer to string
 * @f: Pointer to function
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
