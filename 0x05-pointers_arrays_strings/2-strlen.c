/**
 * _strlen - counts the length of given string
 * @s: char pointer variable to string
 * Returns: number representing length of string
 */

int _strlen(char *s)
{
	int count = 0;
	
	while (s[count] != '\0')
	{
		++count;
	}
	return (count);
}