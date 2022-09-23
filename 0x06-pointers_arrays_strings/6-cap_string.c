#include "main.h"

/**
 *cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation,
 * new line, (, ), {, and }.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *cap_string(char *s)
{
	int escape = 0;

	escape = 0;
	while (s[escape] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[escape] == ' ' || s[escape] == '\t' || s[escape] == '\n' ||
			s[escape] == ',' || s[escape] == ';' || s[escape] == '.' ||
			s[escape] == '!'	|| s[escape] == '?'	|| s[escape] == '"' ||
			s[escape] == '(' || s[escape] == ')' || s[escape] == '{' ||
			s[escape] == '}')
		{
			if (s[escape + 1] >= 97 && s[escape + 1] <= 122)
			{
				s[escape + 1] = s[escape + 1] - 32;
			}
		}
		escape++;
	}
	return (s);
}
