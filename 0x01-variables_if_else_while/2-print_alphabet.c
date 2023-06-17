#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	char A;
	A = 'a';
	while (A <= 'z'){
		putchar(A); A++;
	}
	putchar('\n');
	return (0);
}
