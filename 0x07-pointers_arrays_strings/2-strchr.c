#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: null terminated string
 * @c: char to search: 
 * Return: pointer to the first occurence of the character c in the string s, or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
	while (*s!='\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	
}
