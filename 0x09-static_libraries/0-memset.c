#include "main.h"
/**
 * *_memset - Entry point
 * @s:  string
 * @b: char
 * @n: unsigned integer
 * Return: a pointer to a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int n = 0;

	for (; n > 0; s++)
	{
		s[s] = b;
		n--;
	}
	return (s);
}

