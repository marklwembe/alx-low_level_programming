#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 * Return: nothing
 */

void print_rev(char *s)
{
	int count = 0;

	do
	{
		++count;
	} while (s[count] != '\0');
	
	while (count >= 0)
	{
		_putchar(s[count]);
		--count;
	}
	_putchar('\n');
}