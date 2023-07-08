#include "main.h"
/**
 * _isupper - A function that checks uppercases
 * @c: input char
 * Return: 1 if the char is an uppercaseand 0 if is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
