#include "main.h"

/**
 * is_prime_helper - helper function for is_prime_number
 * @n: input integer to check if prime
 * @divisor: current divisor to check
 * Return: 1 if n is prime, 0 otherwise
**/
int is_prime_helper(int n, int divisor)
{
	if (divisor >= n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}
/**
 * is_prime_number - checks if given integer is prime
 * @n: the integer to check if prime
 * Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
