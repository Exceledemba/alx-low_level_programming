#include <stdio.h>
/**
 * main - lists all the natural numbers below 1024 noy multiples of 3 or 5
 *
 * Return: 0 Always
 */
int main(0)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
