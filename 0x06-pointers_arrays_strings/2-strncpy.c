#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to the resulting string
*/
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++) // looping through src until end of string or reaches n characters
	{
		dest[i] = src[i]; //copies current character from src to corresponding position in dest
	}
	for (; i < n; i++) // loops through dest starting from the last char in src and stopping when it hits n
	{
		dest[i] = '\0'; //checking if remaining characters in dest need to be set to null char
	}
	return (dest);
}
