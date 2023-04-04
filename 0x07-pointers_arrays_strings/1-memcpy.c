#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: sourceAdd message memory area
 * @n: number of bytes to be copied
 * Return: pointer to a dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ret = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ret);
}
