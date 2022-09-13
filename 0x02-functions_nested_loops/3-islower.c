#include "main.h"
/**
 * _islower - Checks if argument given is lower case
 * @c: The argument given
 * Return: 1 if c is lower case otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
