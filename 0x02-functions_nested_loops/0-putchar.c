#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char message[9] = "_putchar\n";

	while (i < 9)
{
		_putchar(message[i]);
		++i;
	}
	return (0);
}

