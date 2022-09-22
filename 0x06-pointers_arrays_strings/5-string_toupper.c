#include "main.h"

/**
 *string_toupper - Change lowercase letters to upper.
 *@a: Pointer to string.
 *Return: Pointer to new string.
 */
char *string_toupper(char *a)
{
	int count = 0;

	while (a[count] != '\0')
	{
		if (a[count] >= 97 && a[count] <= 122)
		{
			a[count] = a[count] - 32;
		}
		count++;
	}
	return (a);
}
