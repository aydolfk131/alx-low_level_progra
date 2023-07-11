#include "main.h"
/**
 * *create_array - A function that creates array of char
 * @size: integral value
 * @c: character
 * Return: A pointer or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i == 0; i < size; i++)
		s[i] = c;
	return (s);
}
