#include <stdio.h>

/**
 * main - Computes the sum of all the multiples
 * The upper limit of the range of numbers to consider.
 *
 * Return: always 0.
 */


int main(void)
{
	int i;
	int sum;

	sum = 0;


	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5 == 0))
		{
			sum = sum += i;
		}
	}

	printf("%d\n", sum);
	return (0);
}
