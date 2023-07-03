#include "main.h"
/**
 * _strpbrk - A function that searches a string 
 * @s: the string
 * @accept: output string
 * Return: a pointer to the byte or NULL if no such byte
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
