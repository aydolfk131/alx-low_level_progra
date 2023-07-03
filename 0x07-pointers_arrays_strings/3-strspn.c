#include "main.h"
/**
 * _strspn - A function that gets the lenght of the prefix substring
 * @s: the string
 * @accept: substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[s]; r++)
		{
			if (*s == accept[r])
				n++;
			break;

		else if (accept[r+1] == '\0')
			return (n);
		}
		s++;
	}
	return (0);
}
