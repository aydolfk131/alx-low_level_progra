#include " main.h"
/**
 * _memset - A funtion that fills the memory
 * @n: number of bytes of the memory area
 * @s: input value
 * @b: input value
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0, i++)
	{
		s[i] = b;
		n--;
	}
	return (0);
}

