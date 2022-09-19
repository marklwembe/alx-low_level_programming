#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: Pointer to string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		++count;
	}
	--count;

	char rev_s[count];
	int i = 0;
	while (count >= 0)
	{
		rev_s[i] = s[count];
		--count;
		++i;
	}
	int j = 0;
	while (rev_s[j] != '\0'){
		s[j] = rev_s[j];
		++j;
	}
}
