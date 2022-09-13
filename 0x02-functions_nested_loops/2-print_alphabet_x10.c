#include "main.h"

/**
 * print_alphabet_x10 - Prints the latin alphabet 10 times
 * @void - Takes no arguments
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		int j = 0;
		while (j < 26)
		{
			_putchar('a' + j);
			++j;
		}
		_putchar('\n');
		++i;
	}
}
