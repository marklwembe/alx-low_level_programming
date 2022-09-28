#include "main.h"

/**
 * _pow_recursion - Returns x multiplied y times
 * @x: Integer to be operated on
 * @y: The number x is raised to
 * Return: x multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	
	else if (y < 0)
		return (-1);

	else if (y == 1)
		return (x);

	return (x *= _pow_recursion(x, y - 1));
}
