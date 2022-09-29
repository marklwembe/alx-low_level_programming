#include "main.h"

/**
* partial_string_match - Check if part of string in after_wldcd matches 
* @s1: Pointer to first string
* @s2: Pointer to second string
* @after_wldcd: Position right after wildcard
* Return: 1 if true 0 otherwise
*/

int partial_string_match(char *s1, char *s2, char *after_wldcd)
{

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 == '*')
		return (partial_string_match(s1, s2 + 1, s2 + 1));

	if (*s1 == '\0' && *s2 != '\0')
		return (0);

	if (*s2 == '*')
		return (partial_string_match(s1, s2 + 1, s2 + 1));

	if (*s1 == *s2)
		return (partial_string_match(s1 + 1, s2 + 1, after_wldcd));

	else
		return (partial_string_match(s1 + 1, after_wldcd, after_wldcd));

}

/**
* wildcmp - Compare if string with wildcard matches
* @s1: Pointer to first string
* @s2: Pointer to second string
* Return: 1 if found 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
		return (partial_string_match(s1, (s2 + 1), (s2 + 1)));

	else
		return (0);
}
