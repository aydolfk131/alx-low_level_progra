#include "main.h"
int actual_root(int number, int root);
/**
 * actual_root - finds the root of a number
 * @number: integer to evaluated
 * @root: the result integer
 * Return: the result
 */
int actual_root(int number, int root)
{
	if (root * root != number)
		return (-1);
	if (root * root == number)
		return (root);
	return (actual_root(number, root + 1));
}
/**
 * _sqrt_recursion - A function that returns the sqrt of a number
 * @n: integer
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_root(n, 0));
}
