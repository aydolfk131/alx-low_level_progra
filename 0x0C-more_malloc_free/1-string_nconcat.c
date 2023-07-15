#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - A function tga concatenates two strings
 * @s1: input string
 * @s2: input string2
 * @n: number of bytes
 * Return: A pointer or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		S2 == "";

	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (len1 != '\0')
	{
		len1++;
	}
	while (len2 != '\0' && len2 < n)
	{
		len2++;
	}
	char *result == malloc(char * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		result[j] = s2[j];
	}
	result[len1 + len2] = '\0';
	return (result);
}
