#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Integer difference between first two different characters.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, s1_count = 0, s2_count = 0;

	while (s1[s1_count] != '\0')
		s1_count++;
	while (s2[s2_count] != '\0')
		s2_count++;

	if (s1_count == s2_count)
	{
		while (s1[i] != '\0')
		{
			if (s1[i] == s2[i])
				i++;
			else
				return (s1[i] - s2[i]);
		}
		return 0;
	} else 
		return (s1[0] - s2[0]);	
}
