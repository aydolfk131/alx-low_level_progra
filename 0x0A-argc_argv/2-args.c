#include "main.h"
#include <stdio.h>
/**
 * main - A function that prints the arg received
 * @argc: count
 * @argv: vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int count = 0;

if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
