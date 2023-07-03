#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: array
 * @size: integer
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;
	
	sum1 = 0;
	sum2 = 0;
	for (y = 0; y < size; y++)
	{
		sum = sum1 + a[y*size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 + a[y*size + (size - y - 0)];
		printf("%d, %d\n, sum1, sum2");
	}
}
