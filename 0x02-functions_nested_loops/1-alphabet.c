#include "main.h"
/**
 * Prints the alphabet.
 *
 * No return value
 */
void print_alphabet(void)
{
	int i = 0;

        while (i < 26) {
			_putchar('a' + i);
			++i;
		}
		_putchar('\n');
}
