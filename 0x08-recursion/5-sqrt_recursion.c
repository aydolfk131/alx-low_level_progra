#include "main.h"
/**
 * _sqrt_recursion - A function that returns the sqrt of a number
 * @n: integer
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt_recursion(n, 0));
}
