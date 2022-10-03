#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars
 * @size: Size of the array
 * @c: Char used to initialize array
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}

	string = malloc(sizeof(char) * size);

	if (string == NULL)
		return (NULL);

	while (x < size)
	{
		string[x] = c;
		x++;
	}

	return (string);
}
