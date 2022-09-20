#include "main.h"
/**
 * _strcpy - Copy the string pointed to by src with the terminating null byte
 * @dest: Buffer variable/return
 * @src: String to be copied
 * Return: Char pointer to string
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
