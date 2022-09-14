#include "main.h"

/**
 * _isalpha - Checks if character is a letter
 * @c: integer input variable
 * Return: 2 if letter 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c <123))
		return (1);
	else
		return (0);
}

