#include "main.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
/**
 * main - multiplicatication of two values
 * @argc: value1
 * @argv: value2
 * Return: 0 success and error on one input then 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("error\n");
	return (1);
}
