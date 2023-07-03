#include "main.h"
/**
 * _strchr - A function that locates a cahracter in a string
 * @c: the character in a string
 * @s: the string
 * Return: character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (0);
}
