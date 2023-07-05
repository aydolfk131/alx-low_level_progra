#include "main.h"
/**
 * factorial - A function that returns the factorial of a number
 * @n: integer
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}

