#include "main.h"

/**
 * rot13 - Encodes strings using rot13 cipher
 * @s: Input pointer to string
 * Return: Pointer to resulting string/char array
 */
char *rot13(char *s)
{
	int charPos = 0, move;
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z'};

	char cypher[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M'};

	while (s[charPos] != '\0')
	{
		move = 0;
		while (move < 53)
		{
			if (alpha[move] == s[charPos])
			{
				s[charPos] = cypher[move];
				break;
			}
			move++;
		}
		charPos++;
	}
	return (s);
}
