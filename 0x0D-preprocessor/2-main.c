#include <stdio.h>
/**
 * main - Prints the name of file it was compiled from
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *file = __FILE__;
	int i = 0;

	while (file[i] != '\0')
	{
		_putchar(file[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
