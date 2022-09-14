#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int a, b;
	int result;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = b * a;
			if (b == 0)
				_putchar(result + '0');
			if (result < 10 && b != 0)
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
	}
}
