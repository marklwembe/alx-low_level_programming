#include "main.h"
/**
 * _strcat - A function that concatenates two strings
 * @dest: Pointer to first string
 * @src: Pointer to second string
 * Returns a pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, i = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while(src[i] != '\0')
	{
		*(dest + i + 1);
		++i;
	}
	return (*dest);
}
