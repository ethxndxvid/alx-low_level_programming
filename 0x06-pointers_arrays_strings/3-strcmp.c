#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 if strings are the same,
 * or difference between chars at current positon
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	} else
	{
		return (s1[i] - s2[i]);
	}
}
