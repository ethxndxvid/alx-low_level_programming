#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 * Return: the encoded string
*/
char *leet(char *str)
{
	int i, j;
	char leet[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet[j] || str[i] == leet[j] + 32)
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
