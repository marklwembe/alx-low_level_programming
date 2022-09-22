#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest: The first string and return variable
 * @src: The second string
 * @n: number of bytes to concatenate from the second string
 * Return: dest pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, i = 0;

	while (dest[count])
		count++;

	while (i < n && src[i] != 0)
	{
		dest[count] = src[i];
		count++;
		i++;
	}

	dest[count]  = '\0';
	return (dest);
}
