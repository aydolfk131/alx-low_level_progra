#include "main.h"
/**
 * _puts - A function that prints a string
 * * @s: string
 * Return: pointer to a string
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\0');
}
