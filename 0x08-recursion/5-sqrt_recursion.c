#include "main.h"

/**
 * _sqrt_recursion_helper - find the natural square root of a number
 * @n: the number to find the square root of
 * @start: starting point of the search range
 * @end: ending point of the search range
 * Return: square root of n if found, -1 otherwise
*/

int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	} int mid = (start + end) / 2;
	if (mid * mid == n)
	{
		return (mid);
	}
	if (mid * mid < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
	return (_sqrt_recursion_helper(n, start, mid - 1));
}
/**
 * _sqrt_recursion - finds the square root of a number using recursion
 * @n: the number to find the square root of
 * Return: the square root of n if found, -1 otherwise
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion_helper(n, 1, n));
}
