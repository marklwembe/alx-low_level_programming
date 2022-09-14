#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int a = 0, b;
	int result;

	while (a < 10)
	{
		b = 0;

		while (b < 10)
		{
			result = b * a;
			if (b == 0)
				_putchar(result + '0');
			if (result < 20 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			++b;
		}
		++a;
		_putchar('\n');
	}
}