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
		for (b = 0; b < 10; b++)
		{
			result = b * a;
			if (b == 0)
				_putchar(result + '0');
			if (result < 20 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
		++a;
	}
}
