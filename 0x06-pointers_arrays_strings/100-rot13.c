#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'); j++)
		{
			if (j == 13)
			{
				break;
			}
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				c = s[i] + 13;
			}
			else
			{
				c = s[i] - 13;
			}
			s[i] = c;
		}
	}
	return (s);
}
