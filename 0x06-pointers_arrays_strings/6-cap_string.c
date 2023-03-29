#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to a string
 * Return: pointer to a string
*/
char *cap_string(char *str)
{
	int i, j;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(separators) / sizeof(char); j++)
		{
			if (str[i - 1] == separators[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				break;
			}
		}
	}
	return (str);
}
