#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
	putchar('-');
	i = -n;
	}
	else
	i = n;
	if (i / 10)
	print_number(i / 10);
	putchar(i % 10 + '0');
}
