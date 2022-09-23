/**
 * leet - Encodes a string into 1337
 * @s: Points
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int count, leet;
	char letter[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	count = 0;
	while (s[count] != '\0')
	{
		leet = 0;
		while (leet < 10)
		{
			if (letters[leet] == s[count])
			{
				s[count] = Num[leet];
			}
			leet++;
		}
		count++;
	}
	return (s);
}
