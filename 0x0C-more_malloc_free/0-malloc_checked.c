#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: the integral value
 * Return: A pointer to the alllocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (r == NULL)
	{
		printf("error\n");
		exit(98);
	}
	return (r);
}
