#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 * Return: the length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome_helper - check if a string is a palindrome
 * @s: pointer to the string
 * @i: index of current character being checked
 * Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome_helper(char *s, int i)
{
	if (i <= _strlen_recursion(s) / 2)
	{
		return (1);
	}
	if (s[i] != s[_strlen_recursion(s) - i - 1])
	{
		return (0);
	}
	return (is_palindrome_helper(s, i - 1));
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to the string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, _strlen_recursion(s) - 1));
}
