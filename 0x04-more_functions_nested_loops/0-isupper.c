#include "main.h"
/**
 * _isupper - Check if given number rep an ASCII uppercase letter
 * @c - a
 * Return - 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
