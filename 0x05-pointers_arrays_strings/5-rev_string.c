#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: Pointer to string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int count = 0, i = 0, j = 0;
	char *rev, hold;
	
	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	rev = s;

	while (i < (count - 1))
	{
		j = i + 1;
		while (j > 0)
		{
			hold = *(rev + j);
			*(rev + j) = *(rev + (j - 1));
			*(rev + (j - 1)) = hold;
			j--;
		}
		i++;
	}
}
