#include "main.h"
/**
 * _strncpy - Copies a given number of bytes.
 * @dest: Copy destination
 * @src: Copy source
 * Return: Value referenced by @dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}

	return (dest);
}
