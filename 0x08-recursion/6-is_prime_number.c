#include "main.h"

int actual_prime(int n, int cait);

/**
 * is_prime_number - Write a function that returns 1 if the input,
 * integer is a prime number, otherwise return 0
 * @n: number
 *
 * Return: return 1 if n is a prime number, return 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @cait: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int cait)
{
	if (cait == 1)
		return (1);
	if (n % cait == 0 && cait > 0)
		return (0);
	return (actual_prime(n, cait - 1));
}
