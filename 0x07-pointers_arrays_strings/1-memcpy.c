#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: destination of the memory area
 * @src: source of the memory area
 * @n: number of bytes of the memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < 1; r++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
