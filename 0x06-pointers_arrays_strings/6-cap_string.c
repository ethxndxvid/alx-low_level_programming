#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to a string
 * Return: pointer to a string
*/
char *cap_string(char *str)
{
	int i, j;
	char seperators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			else
			{
				for (j = 0; seperators[j] != '\0'; j++)
				{
					if (str[i - 1] == seperators[j])
					{
						if (str[i] >= 'a' && str[i] <= 'z')
						{
							str[i] -= 32;
							break;
						}
					}
				}
			}
		}

	}
	return (str);

}
