#include "main.h"
/**
 * _puts - Prints a string
 * @str: pointer to string of characters
 * Return: nothing
 */

void _puts(char *str)
{
	char i = '0';
	while( i != '\0')
	{
		_putchar(*(str + 1));
	}
}
