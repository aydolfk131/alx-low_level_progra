#include "main.h"
/**
 * _strlen - A function that checks the string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int longs = 0;

	while (*s != '\0')
	{
		longs++;
		s++;
	}
	return (longs);
}
