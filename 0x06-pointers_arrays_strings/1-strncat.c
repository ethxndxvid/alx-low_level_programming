#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, const char *src, int n)
{
	char *ptr = dest;

	while (*dest)
	{
		dest++;
	}
	while (n-- && *src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}
