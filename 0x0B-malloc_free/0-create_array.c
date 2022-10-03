#include "main.h"
/**
 * create_array - Function that creates an array of chars
 * @size: Size of the array
 * @c: Char used to initialize array
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char arr[size];
	
	arr[0] = c;
	if ( size == 0)
	{
		return ('\0');
	}
	
	return (&arr);
}