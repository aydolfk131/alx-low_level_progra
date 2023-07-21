#include "variadic_finctions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all
 * @n: number of parameters
 * Return: sum of all parameters or 0 if there are no inputs
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
