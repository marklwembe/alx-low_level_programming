#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: Pointer to string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int count = 0, i = 0, j = 0;

	while (s[count] != '\0')
	{
		++count;
	}
	--count;

	char rev_s[count];

	while (count >= 0)
	{
		rev_s[i] = s[count];
		--count;
		++i;
	}

	while (rev_s[j] != '\0'){
		s[j] = rev_s[j];
		++j;
	}
}
