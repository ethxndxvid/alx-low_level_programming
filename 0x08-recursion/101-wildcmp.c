#include "main.h"
/**
 * wildcmp_helper - compare two strings and handle wildcard character *
 * @s1: pointer to first string
 * @s2: pointer to second string, which can contain wildcard character *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (wildcmp_helper(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp_helper(s1 + 1, s2))
		{
			return (1);
		}
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}
	return (0);
}
/**
 * wildcmp - compare two strings and handle wildcard character *
 * @s1: pointer to first string
 * @s2: pointer to second string, which can contain wildcard character *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp_helper(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp_helper(s1, s2 + 1))
		{
			return (1);
		}
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
