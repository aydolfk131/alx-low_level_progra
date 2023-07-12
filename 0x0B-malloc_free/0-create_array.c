#include "main.h"
#include <stdlib.h>
/**
 * *create_array - A function that creates array of char
 * @size: integral value
 * @c: character
 * Return: A pointer or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *str
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i == 0; i < size; i++)
		str[i] = c;
	return (str);
}
