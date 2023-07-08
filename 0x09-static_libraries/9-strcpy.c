#include "main.h"
/**
 * *_strcpy - A function that copies two string
 * @dest: destination
 * @src: source string
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src * i) != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
