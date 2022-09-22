#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest: The first string and return value
 * @src: The second string
 * Return: dest pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, i = 0;

	while (dest[count])
		count++;

	while (i < n)
	{
		dest[count] = src[i];
		count++;
		i++;
	}

	dest[count]  = '\0';
	return (dest);
}
