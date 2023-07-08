#include "main.h"
/**
 * _isdigit - A function that checks if input is a digit
 * @c: input char
 * Return: 0if c  1  and 0 if is not digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
