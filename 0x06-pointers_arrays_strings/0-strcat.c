#include "main.h"

char *concat_strings(char *dest, const char *src)
{
    char *result = dest;
    while (*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '/0';
    return result;
}
