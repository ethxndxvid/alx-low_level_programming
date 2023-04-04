#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s : memory area to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to the beginning of the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*s++ = b;
	}
	return (ptr);
}
