#include "main.h"

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
	return (ptr);
}
