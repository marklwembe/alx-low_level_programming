#include "main.h"
/**
 * print_alphabet - It prints the latin alphabet
 * @void - Takes no arguments
 * Return: void
 */
void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar('a' + i);
		++i;
	}
	_putchar('\n');
}
