#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 substitution cipher
 *
 * @str: Pointer to input string to be encoded
 *
 * Return: Pointer to encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];

		if (c >= 'a' && c <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				c++;
				if (c > 'z')
				c = 'a';
			}
		}
		else if (c >= 'A' && c <= 'Z')
		{
			for (j = 0; j < 13; j++)
			{
				c++;
				if (c > 'Z')
				c = 'A';
			}
		}
		str[i] = c;
	}
	return (str);
}
