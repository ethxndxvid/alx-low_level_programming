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
	char *ptr = dest;

	while (n-- && *src)
	{
		*dest++ = *src++;
	}
	while (n--)
	{
		*dest++ = '\0';
	}
	return ptr;
}
