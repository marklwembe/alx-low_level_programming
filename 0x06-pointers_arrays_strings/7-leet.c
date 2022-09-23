/**
 * leet - Encodes a string into 1337
 * @s: Points
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int count = 0, leet;
	char letter[] = "aAeEoOtTlL";
	char code[] = "4433007711";


	while (s[count] != '\0')
	{
		leet = 0;
		while (leet < 10)
		{
			if (letter[leet] == s[count])
			{
				s[count] = code[leet];
			}
			leet++;
		}
		count++;
	}
	return (s);
}
