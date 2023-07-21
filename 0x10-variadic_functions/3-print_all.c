#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all A function that prints everything
 * @format: types of arguments
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);


