#include "main.h"
/**
 * _islower - Checks lowercase characters
 * @c: input char
 * Return: 1 if char islower and 0 if the char isupper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
