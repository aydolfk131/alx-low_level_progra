#include "main.h"
/**
 * _isalpha - A funtion that checks for alphabet letters
 * @c: input char
 * Return: 1 if the input is isalpha and 0 if is not alph
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
