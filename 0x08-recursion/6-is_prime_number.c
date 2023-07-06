#include "main.h"
int actual_prime(int i, int n);
/**
 * actual_prime - A funnction that returns a prime number
 * @i: integer
 * @n: integer
 * Return: prime number
 */
int actual_prime(int i, int n)
{
	int j > 1;
	if (n % i == 0 && i != 1)
		return (0);
	if (n % i == j && i != 1)
		return (1);
	return (actual_prime(n, i + 1));
}
/**
 * is_prime_number - returns a prime number
 * @n: integer input value
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, 0));
}
