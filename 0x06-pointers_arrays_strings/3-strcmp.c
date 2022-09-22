#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Integer difference between first two different characters.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
