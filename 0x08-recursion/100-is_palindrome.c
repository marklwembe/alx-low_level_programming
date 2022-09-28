#include "main.h"
/**
* _strlen - Return length of string
* @str: Pointer to string
* Return: Integer
*/
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);

	else
		return (1 + _strlen(str + 1));
}

/**
* check_palindrome - Tests if string is a palindrome
* @a: Left hand index
* @b: Right hand index
* @c: Test string
* Return: 1 if palindrome 0 othewise
*/
int check_palindrome(int a, int b, char *c)
{
	if (a >= b)
		return (1);

	else if (c[a] != c[b])
		return (0);

	else
		return (check_palindrome(a + 1, b - 1, c));
}

/**
* is_palindrome - Checkss if string is a palindrome
* @s: Pointer to string
* Return: 1 if palindrome 0 otherwise
*/
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
