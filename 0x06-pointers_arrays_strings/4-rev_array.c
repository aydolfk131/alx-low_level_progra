#include "main.h"
 /**
  * reverse_array - Reverses array of integers
  * @a: array
  * @n: number of elements of an array
  * Return: void
  */
void reverse_array(int *a, int n);
{
	int i;
	int j;

	for (i = a; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

